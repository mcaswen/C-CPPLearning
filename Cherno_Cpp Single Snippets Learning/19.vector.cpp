#include <iostream>
#include <vector>

//记得传引用！
void func(std::vector <int>& v) {}

class Vertex {

private:
    float mx, my, mz;

public:
    Vertex(float x, float y, float z) 
        : mx(x), my(y), mz(z) {}

    Vertex(const Vertex& other) 
        : mx(other.mx), my(other.my), mz(other.mz) {

        std::cout << "Copied" << std::endl;

    }

};


int main() {

    std::vector <int> v;
    std::vector <int> v0 = std::vector <int> (10, 0);
    std::vector <int> v1(10, 0);

    v.push_back(1);
    v.push_back(2);

    /* for (int i = 0; i < v.size(); i++) {

        std::cout << v[i] << std::endl;

    }
        //防拷贝
    for (const int& i: v) {

        std::cout << i << std::endl;

    } */

    std::vector <Vertex> vertices;
    vertices.reserve(3); //提前分配要传入的对象内存大小

    //直接构造在vector分配的内存里
    vertices.emplace_back(1, 2, 3);
    vertices.emplace_back(4, 5, 6);
    vertices.emplace_back(7, 8, 9);

}