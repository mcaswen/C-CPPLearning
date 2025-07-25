#include <iostream>
#include <string>

class Entity {

private:
    std::string m_Name;

public:

    Entity(): 
        m_Name("Unknown") {}

    Entity(const std::string name):
        m_Name(name) {}

    const std::string GetName() const {

        return m_Name;

    }

};

int main() {

    //栈上分配，c++中最快且最可控的创建对象的方式
    Entity e0; //会分配内存并调用默认构造函数，而非造成空指针/引用
    std::cout << e0.GetName() << std::endl;

    Entity e1 = Entity("mcaswen");
    std::cout << e1.GetName() << std::endl;

    //堆上分配,性能开销相对大，且需要自己手动释放内存
    Entity* e;
    {
        Entity* mcaswen = new Entity("mcaswen");
        e = mcaswen;
        std::cout << mcaswen->GetName() << std::endl;

    }

    std::cout << e->GetName() << std::endl;
    
    delete(e); //悬空指针
    e = nullptr; //置空

    //std::cout << e->GetName() << std::endl;

}