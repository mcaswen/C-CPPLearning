#include <iostream>

class Entity {

public:
    void Print() const {

        std::cout << "Hello" << std::endl;

    }

};

class ScopedPtr {

private:
    Entity* m_E;

public:
    ScopedPtr(Entity* e)
        : m_E(e) {}

    ~ScopedPtr() {

        delete m_E;

    }

    Entity* operator -> () {

        return m_E;

    }

    const Entity* operator -> () const {

        return m_E;

    }

};

struct Vector3 {

    float x, y, z;

};

int main() {

    Entity* entity = new Entity();
    ScopedPtr e = ScopedPtr(entity);

    e->Print();

    int offset = (std::uintptr_t)&((Vector3*)nullptr)->z;
    std::cout << offset << std::endl;

}