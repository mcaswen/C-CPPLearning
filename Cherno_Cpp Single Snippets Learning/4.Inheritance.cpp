#include <iostream>
#include <cstring>

struct Vector2 {
        
    float x;
    float y;

};

class Entity {

private:
    
    Vector2 position;

public:
    
    //结构体的初始化列表，写成这种形式
    Entity(float ix, float iy) : position{ix, iy} {}

    Entity() : position{0.0, 0.0} {}
    
    void Move(float ax, float ay) {

        position.x += ax;
        position.y += ay;

    }

};

class Player : public Entity {

public:
    
    std::string name;

    
public:
    
    Player() : Entity() {

        name = "";

    }

    Player(float ix, float iy, std::string cname)
     : Entity(ix, iy), name(cname) {} 

    void ChangeName(std::string cname) {

        name = cname;

    }

};