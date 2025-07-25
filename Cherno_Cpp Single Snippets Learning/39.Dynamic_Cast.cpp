#include <iostream>

//dynamic_cast的使用

class Entity {

public:
    
    virtual void PrintName() {} //赋予虚函数表，现在Entity是多态类型了

};
class Player : public Entity {};
class Enemy : public Entity {};

void test1() {

    Player* player0 = new Player(); //合法
    Entity* entity0 = new Player(); //依然合法，player也是Entity类型

    //player = entity0; //不合法，entity0还有可能是Enemy类型

    Entity* entity1 = new Enemy();

    //Player* player1 = (Player*)entity1; //危险，未定义行为

    Entity* ActualPlayer = new Player();
    Entity* ActualEnemy = new Enemy();

    Player* p0 = dynamic_cast<Player*>(ActualEnemy); //返回null
    
    if (p0) { //or if (dynamic_cast<Player*>(ActualEnemy))

        std::cout << "ActualEnemy is Player" << std::endl;

    }

    Player* p1 = dynamic_cast<Player*>(ActualPlayer); //成功转换为Player*

}

