#include <iostream>

class Printable {

public:
    virtual std::string GetClassName() = 0;

};

//若不实现纯虚函数就无法实例化
class Entity : public Printable {

public:
    std::string GetClassName() override {

        return "Entity";

    }

};

//继承自父类，若父类中实现了纯虚函数，则子类可以“借用”，无需自己实现虚函数也可以被实例化
class Player : public Entity{

public:
    std::string GetClassName() override {

        return "Player";

    }

};

void Print(Printable* A) {

    std::cout << A->GetClassName() << std::endl;

}

int main() {

    Entity* e = new Entity();
    Player* p = new Player();

    Print(e);
    Print(p);

}