#include <iostream>
#include <string>

class Example {

public:
    int m_a;

public:
    
    Example() {

        std::cout << "This class is inialized." << std::endl;

    }

    Example(int a) {

        m_a = a;
        std::cout << "This class is inialized with " << a << std::endl;

    }

};

class Entity {

public:
    
    std::string m_Name;
    int m_Score;
    Example m_Example;

public:

    //编译器会先隐式地调用Example的默认构造函数
    /* Entity() {

        m_Name = "Unknown";
        m_Example = Example(8); //再在这里调用有参构造函数

    } */

    //相当于 Entity() : Example() {。。。}

    //不再隐式调用默认构造函数，直接调用有参构造函数
    Entity() : m_Name("Unknown"), m_Example(8) {}

    Entity(std::string name)
        : m_Name(name) {}

};

int main() {

    Entity e0;

}