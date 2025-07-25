#include <iostream>

class Entity {

private:
    int x;
    int y;


public:
    Entity(int x, int y) {

        //变量名相同情况下的赋值
        this->x = x;
        this->y = y;

    }

    int GetX() const {

        //Entity* e = this; const类型方法中，this是const Entity类型，必须也赋值给const Entity变量
        const Entity* e = this;

        return e->x;

    }

};