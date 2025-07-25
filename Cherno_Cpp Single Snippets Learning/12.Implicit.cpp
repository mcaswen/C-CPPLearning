#include <iostream>

class Entity {

private:
    std::string m_Name;
    int m_Age;

public:
    //禁止隐式转换
    explicit Entity(const std::string& name) 
        : m_Name(name), m_Age(-1) {}

    Entity(int age) 
        : m_Name("Unknown"), m_Age(age) {}

    const std::string GetName() const {

        return m_Name;

    }

};

void PrintName(const Entity& e) {

    std::cout << e.GetName() << std::endl;

}

int main() {

    Entity e0 = 22;
    //Entity e1 = std::string("mcaswen");

    PrintName(22); //隐式调用构造函数
    //PrintName(std::string("mcaswen"));


}