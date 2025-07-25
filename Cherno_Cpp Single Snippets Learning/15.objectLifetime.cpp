#include <iostream>

class Entity {

public:
    Entity() {

        std::cout << "Create Entity!" << std::endl;

    }

    ~Entity() {

        std::cout << "Destroy Entity!" << std::endl;

    }

};

//一个封装指针的类
class ScopedPtr {

private:
    Entity* m_Ptr;

public:
    ScopedPtr(Entity* e) 
        : m_Ptr(e) {}

    ~ScopedPtr() {

        delete m_Ptr;

    }

};

int main() {

    {

        //堆上分配内存，但在作用域结束后自动销毁，无需手动销毁
        ScopedPtr entity = new Entity(); //隐式转换
        //ScopedPtr entity = ScopedPtr(new Entity); //与上式相同

    }
    
}