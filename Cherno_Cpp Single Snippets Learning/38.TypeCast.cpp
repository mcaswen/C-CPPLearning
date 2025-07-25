#include <iostream>

//c风格与c++风格类型转换的简单应用
class Aclass {
};

void test1() {

    double a = 5.5;
    int b = a; //隐式转换，截断小数部分

    int c = (int)a; //显式转换，c风格

    int d = static_cast<int>(a); //显式转换，c++风格

    Aclass clas;
    
    //int d = static_cast<int>(clas); //编译时检查，防止无效转换
    Aclass* clas1 = reinterpret_cast<Aclass*>(&a); //内存强制重新解释

}

//dynamic_cast的应用
class Base {

public:
    
    Base() {};
    virtual ~Base() {};

};

class Derived : public Base {

public:
    
    Derived() {};
    ~Derived() {};

};
class AnotherClass : public Base {

public:
    
    AnotherClass() {};
    ~AnotherClass() {};

};

void test2() {

    Derived* derived = new Derived();

    Base* base = derived; //base 实际上是Derived*类型，但我们假装不知道

    AnotherClass* ac = dynamic_cast<AnotherClass*>(base); //自动检查多态实际类型，若错误则返回空

    if (ac == nullptr) {

        std::cout<< "Type Cast Failed" << std::endl;

    }

    Derived* dr = dynamic_cast<Derived*>(base); //正确转换

    if (dr != nullptr) {

        std::cout<< "Type Cast Successed" << std::endl;

    }

}

int main() {

    test2();


}
