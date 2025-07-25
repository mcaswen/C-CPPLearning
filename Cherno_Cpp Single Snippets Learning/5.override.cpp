#include <iostream>

class Entity {

public:

    virtual void PrintName() {

        std::cout << "Entity" << std::endl;

    }

};

class Player : public Entity {

public:

    void PrintName() override {

        std::cout << "Player" << std::endl;

    }

};

void PrintName(Entity* e) {

    e->PrintName();

}


int main() {

    Entity* e = new Entity();
    PrintName(e);
    
    Player* p = new Player();
    PrintName(p);

    Entity* entity = p;

    entity->PrintName();

}