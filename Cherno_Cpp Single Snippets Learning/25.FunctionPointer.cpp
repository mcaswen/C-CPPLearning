#include <iostream>
#include <vector>

//test1
template <typename T>
void HelloWorld(T a) {

    std::cout << "Hello World : " << a << std::endl;

}

void test1() {

    //原始类型
    void(*HelloWorldFunction0)(int);
    HelloWorldFunction0 = HelloWorld;
    
    //typedef封装
    typedef void(*HelloWorldFunction1)(int);
    HelloWorldFunction1 myFunc0 = HelloWorld;

    //using封装
    using HelloWorldFunction2 = void(*)(int);
    HelloWorldFunction2 myFunc1 = HelloWorld;

    //auto自动类型推导
    auto myFunc2 = HelloWorld<int>; //显式制定模版参数

    //HelloWorldFunction0();

}

//test2,传入函数作为参数
template <typename T>
void PrintValue(T value) {

    std::cout << "value is " << value << std::endl; 

}

template <typename T>
void ForEach(std::vector <T>& values, void(*func)(T)) {

    for (T value: values) {

        func(value);

    }

}

void test2() {
    
    std::vector <std::string> vector = {"Hello", "World", "Ni", "Hao"};
    ForEach(vector, PrintValue);

}

int main() {

    //test1();
    test2();


}