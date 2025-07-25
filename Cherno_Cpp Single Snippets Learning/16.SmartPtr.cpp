#include <iostream>
#include <memory>

class Entity {

public:
    Entity() {

        std::cout << "Create Entity!" << std::endl;

    }

    ~Entity() {

        std::cout << "Destroy Entity!" << std::endl;

    }

    void Print() {}

};

int main() {

    //unique_ptr
    {
        //std::unique_ptr<Entity> entity = new Entity() //不合法，不允许隐式转换
        std::unique_ptr<Entity> entity1(new Entity());

        std::unique_ptr<Entity> entity = std::make_unique<Entity>(); //最佳实践，防止构造函数异常

        ///std::unique_ptr<Entity> e0 = entity; //不合法，无法复制

    }

    //shared_ptr
    {
        std::shared_ptr<Entity> e0;
        
        {
            
            std::shared_ptr<Entity>sharedEntity = std::make_shared<Entity>(); //引用计数1
            e0 = sharedEntity;//2

        }//1 sharedEntity指针被销毁，但引用计数未归零，指向的sharedEntity对象仍存在，e0存在

    }//0 e0被销毁，没有指针指向sharedEntity对象，对象也被销毁



}