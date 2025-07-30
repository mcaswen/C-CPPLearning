#include <iostream>
#include <any>
#include <variant>

//std::any用法与和std::variant的对比
void Test1() 
{
    std::any value0; //无需<>指定类型
    value0 = 2;

    value0 = "string";
    std::any value2 = std::string("string2"); //此时才是真std::string

    //加&防拷贝, <>中也需要&
    //auto& v = std::any_cast<std::string&>(value0); //抛出异常，实际是const char*类型
    auto& v2 = std::any_cast<std::string&>(value2);

    //与std::variant的对比
    std::variant <std::string, int> value1;

    value1 = 2;
    value1 = "string";

    //<>中无需&
    auto& v1 = std::get<std::string>(value1); //无异常，隐式转换为std::string类型

    //std::variant指定类型时，会做隐式类型转换
    //而std::any则不会
    //这个易错点体现在const char*类型与string类型的区分之间

    std::any value3 = 1.0; //实际为double

    //auto& v3 = std::any_cast<float&>(value3) //抛出异常，无任何隐式转换 
    auto& v3 = std::any_cast<double&>(value3); 
}

//std::any的内存分配方法
void* operator new(size_t size) 
{
    std::cout << "Memory Allocated" << std::endl;

    return malloc(size);
}

class Strings 
{
    std::string v1, v2;
};

void Test2() 
{
    std::string s;
    std::any string0 = s; //小类型不分配内存

    Strings ss;
    std::any strings = ss; //大类型（超过32字节），动态分配内存
}

int main() 
{
    Test2();
}