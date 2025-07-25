#include <iostream>

//虚析构函数的使用以及必要性
class Base {

public:

    Base() {

        std::cout << "Base Constructor" << std::endl; 

    }

    ~Base() {

        std::cout << "Base Destructor" << std::endl; 

    }

};

class Derived : public Base {

public:

    Derived() {

        std::cout << "Derived Constructor" << std::endl; 

    }

    virtual ~Derived() { //意味着这个类有可能被拓展，可能还有一个析构函数会被调用

        std::cout << "Derived Destructor" << std::endl; 

    }

};

void test1() {

    Base* base = new Base();
    delete base;

    std::cout << "---------------\n";

    Derived* derived = new Derived();
    delete derived; 

    std::cout << "---------------\n";

    Base* poly = new Derived(); //子类和基类的构造函数都会被调用
    delete poly; //若不使用虚析构函数，会导致子类Base的析构函数不被调用，造成可能的内存泄漏

}

int main() {

    test1();

}