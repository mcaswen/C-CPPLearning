#include <iostream>
#include <chrono>
#include <array>

//又一个计时器类
class Timer {

private: 
    std::chrono::steady_clock::time_point m_StartPoint;

public:
    Timer() {

        m_StartPoint = std::chrono::steady_clock::now();

    }

    ~Timer() {

        Stop();

    }

    void Stop() {

        auto endPoint = std::chrono::steady_clock::now();

        auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartPoint).time_since_epoch().count();
        auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endPoint).time_since_epoch().count();

        long long duration = end - start;
        float ms = duration * 1e-3;

        std::cout << "Duration is " << duration << " us" << std::endl;
        std::cout << "And " << ms << " ms" << std::endl;

    }

};

//简单的循环小测试
void Test1() {

    int value = 0;

    {

        Timer timer;

        for (int i = 0; i < 1e6; ++i) {

            value += 2; //编译器优化为常量计算，循环未在运行时真正被执行

        }

    }

    //计时无意义

    std::cout << value << std::endl;

}

//SharedPtr vs new vs UniquePtr

struct  Vector2
{
    
    float x, y;

};


void Test2() {


    std::cout << "Shared Ptr with make_shared BenchMark" << std::endl;
    
    {
        Timer timer;
        std::array< std::shared_ptr<Vector2>, 1000> sharedPtrs;
        
        for (auto& p : sharedPtrs) {

            p = std::make_shared<Vector2>();

        }

    }

    std::cout << "Shared Ptr with New BenchMark" << std::endl;
    
    {
        Timer timer;
        std::array< std::shared_ptr<Vector2>, 1000> sharedPtrs;
        
        for (auto& p : sharedPtrs) {

            p = std::shared_ptr<Vector2>(new Vector2());

        }

    }

    std::cout << "Unique Ptr BenchMark" << std::endl;
    
    {
        Timer timer;
        std::array< std::unique_ptr<Vector2>, 1000> UniquePtrs;
        
        for (auto& p : UniquePtrs) {

            p = std::make_unique<Vector2>();

        }

    }

}


int main() {

    //Test1();
    Test2();


}