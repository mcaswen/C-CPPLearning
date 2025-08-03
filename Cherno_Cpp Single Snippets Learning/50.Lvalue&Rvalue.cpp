#include <iostream>

int GetValue0() 
{
    return 10;
}

// 左值与右值的演示
void Test1() 
{
    // 左值 右值
    int a = 10;
    //10 = a; 不可赋值

    int b = GetValue0(); // 合法
    // GetValue0() = a 不可赋值

}

// 左值引用
int& GetValue1() 
{
    static int value = 10;
    return value; //返回一个对value的左值饮用
}

int GetValue2(int& a)
{
    return 10;
}

int GetValue3(const int& a) 
{
    return 10;
}

void Test2()
{
    GetValue1() = 5; //合法，对左值引用赋值

    int i = 10;

    GetValue2(i); //可以将左值赋值给左值引用
    //GetValue2(10); 无法将右值赋值给非const的左值引用

    const int& a = 10; //可以将右值赋值给const的左值引用

    //以上相当于
    int temp = 10;
    const int& b = temp;

    //const类型左值引用，同时接受左值和右值赋值
    GetValue3(i);
    GetValue3(10);

}

//常用的字符串处理办法
void PrintName0(std::string& name) //只能接受左值
{
    std::cout << name << std::endl;
}

void PrintName1(const std::string& name) //流行写法，同时接受左值和右值，也能防拷贝
{
    std::cout << name << std::endl;
}

void Test3() 
{
    std::string lastName = "wen";
    std::string firstName = "mcas";

    std::string fullName = firstName + lastName;

    PrintName0(fullName); //合法
    //PrintName0(firstName + lastName); 不合法，传入的是右值

    PrintName1(fullName); //合法
    PrintName1(firstName + lastName); //合法

}

//右值引用
void PrintName(const std::string& name) 
{
    std::cout << "[Lvalue] " << name << std::endl;
}

//重载，只接受右值
void PrintName(std::string&& name) //右值引用
{
    std::cout << "[Rvalue] " << name << std::endl;
}

void Test4()
{
    std::string lastName = "wen";
    std::string firstName = "mcas";

    std::string fullName = firstName + lastName;

    PrintName(fullName);
    PrintName(firstName + lastName);
}

int main()
{
    Test4();
}



