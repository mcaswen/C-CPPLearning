#include <iostream>

int main() {

    const int* p1 = new int; //const在*前面，可以改变指针指向的地址，不能改变那个地址存储的内容。
    int const* p2 = new int; //const在*前面，与p1同理

    int* const p3 = new int; //const在*后面，不能改变指针指向的地址，可以改变那个地址存储的内容。

    const int* const p4 = new int; //二者都不能改变
    
    int x = 8;

    auto f = [=]() mutable {

        x++; //现在可以修改通过值传递的x值了
        std::cout << x << std::endl;

    };

    //x仍等于8，值传递不会修改原变量的值

}

class Entity {

private:
    int m_X, m_Y;
    mutable int var;

public:
    
    //不能修改类的内容
    int GetX() const {

        var = 2; //此时可以修改
        return m_X;

    }

};

void PrintEntity(const Entity& e) {

    //GetX方法必须有const修饰符，否则无法保证类不会被修改
    std::cout << e.GetX() << std::endl;

}