#include <iostream>
#include <future>
#include <fstream>
#include <thread>
#include <chrono>

class Mesh 
{
public:
    std::string MeshName;

public:
    static Mesh LoadMesh(std::string filepath) 
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(300));

        return Mesh();
    }
};

class Timer 
{
private:
    std::chrono::steady_clock::time_point m_Start;

public:
    Timer() 
    {
        m_Start = std::chrono::steady_clock::now();
    }

    ~Timer() 
    {
        auto end = std::chrono::steady_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - m_Start);
        
        std::cout << "Time used " << duration.count() << " ms." << std::endl;
    }

};

std::vector <Mesh> m_Meshes;

//无多线程加速版
void LoadMeshes0() {

    std::ifstream stream("src/Models.txt");
    std::string line;
    std::vector <std::string> meshFilepaths;

    while (std::getline(stream, line)) 
    {
        meshFilepaths.push_back(line);
    }

    //for (const auto& file : meshFilepaths) 
    for (int i = 0; i < 10; i++)
    {
        //Mesh::LoadMesh(file);
        m_Meshes.push_back(Mesh::LoadMesh(""));   //渲染往往可以并行加速
    }

}

//多线程加速版
static std::mutex s_MeshesMutex;
std::vector <std::future<void> > m_MeshLoadingAsyncFutures;

static void LoadSingleMesh(std::vector<Mesh>& meshes, std::string filepath)
{
    Mesh mesh = Mesh::LoadMesh(filepath);

    std::lock_guard<std::mutex> lock(s_MeshesMutex);

    meshes.push_back(mesh);
}


void LoadMeshes1() 
{
    m_MeshLoadingAsyncFutures.clear();

    std::ifstream stream("src/Models.txt");
    std::string line;
    std::vector <std::string> meshFilepaths;

    while (std::getline(stream, line)) 
    {
        meshFilepaths.push_back(line);
    }

    //for (const auto& file : meshFilepaths) 
    for (int i = 0; i < 10; i++)
    {
        auto future = std::async(std::launch::async, LoadSingleMesh, std::ref(m_Meshes), "");
        
        // future禁止拷贝
        m_MeshLoadingAsyncFutures.push_back(std::move(future)); //构造后移动进容器
    }

    for (auto& future: m_MeshLoadingAsyncFutures) 
    {
        future.get();
    }
}

void Test1() {
    {
        Timer timer;
        LoadMeshes0();
        std::cout << "Loading Without Muti Threading:" << std::endl;
    }

    std::cout << "------------------------" << std::endl;

    {
        Timer timer;
        LoadMeshes1();
        std::cout << "Loading With Muti Threading:" << std::endl;
    }
}

int main() 
{
    Test1();
}

