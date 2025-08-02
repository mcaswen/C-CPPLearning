#include <iostream>

void* operator new(size_t size) 
{
    std::cout << "Allocated " << size << " bytes" << std::endl;
    return malloc(size);
}

//对比大字符串和小字符串
void Test1() 
{
    std::string name0 = "mcaswen"; // <= 22
    std::string name1 = "mcaswen mcaswen mcaswen"; // 23 char

    // 这里(clang++?)缓冲区最大限制值变成了23个字符
}

int main() 
{
    Test1();
}