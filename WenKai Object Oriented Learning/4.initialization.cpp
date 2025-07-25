#include <iostream>

using namespace std;

class A {

public:
    
    A(int q);           //构造，即初始化
    ~A();               //析构，被调用在成员变量离开作用域之前，用于释放空间
    void f();

private:
    int i;

};

void A::f() {

    this->i = 20;       //this:关键字，指向A对象的指针
    printf("A::f()--i=%p\n", &i);
    printf("this=%p\n", this);


}

A::A(int q) {

    i = q;

}

int main() {

    A a(12);


    return 0;
}