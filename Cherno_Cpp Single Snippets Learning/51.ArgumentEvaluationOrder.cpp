#include <iostream>

void PrintNum(int a, int b) 
{
    std::cout << "a: " << a << ", b: " << b << ", a + b = " << a + b << std::endl;
}

void Test1()
{
    int value = 0;
    PrintNum(value++, value++); //0 1? 但其实是未定义行为, c++17下至少二者不会相同
}

int main()
{
    Test1();
}