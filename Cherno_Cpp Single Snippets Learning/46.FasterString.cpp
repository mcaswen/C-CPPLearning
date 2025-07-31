#include <iostream>
#include <cstdint>

//基础string内存分配测试
static uint32_t s_MemoryAllocationCount = 0;

void* operator new(size_t size) 
{
    s_MemoryAllocationCount++;
    
    std::cout << "Allocated " << size << " bytes" << std::endl;

    return malloc(size);
}

void* operator new[] (size_t size) 
{
    s_MemoryAllocationCount++;
    
    std::cout << "Allocated " << size << " bytes" << std::endl;

    return malloc(size);
}

void PrintName0(const std::string& name) 
{
    std::cout << name << std::endl;
}

void Test1() 
{
    std::string name = "this_is_a_very_long_string_that_should_bypass_sso_completely_and_force_heap_allocation";

    std::string firstName = name.substr(0, 30);
    std::string lastName = name.substr(31, 30);
    
    PrintName0(firstName);

    std::cout << "Allocations: " << s_MemoryAllocationCount << std::endl;
}

//std::string_view优化
void PrintName1(std::string_view name) 
{
    std::cout << name << std::endl;
}

void Test2() 
{
    std::string name = "this_is_a_very_long_string_that_should_bypass_sso_completely_and_force_heap_allocation";

    std::string_view firstName(name.c_str(), 30);
    std::string_view lastName(name.c_str() + 31, 30);
    
    PrintName1(firstName);

    std::cout << "Allocations: " << s_MemoryAllocationCount << std::endl;
}

//完全不使用std::string来达到0内存分配
void Test3() 
{
    const char* name = "this_is_a_very_long_string_that_should_bypass_sso_completely_and_force_heap_allocation";

    std::string_view firstName(name, 30);
    std::string_view lastName(name + 31, 30);
    
    PrintName1(firstName);
    
    PrintName1("mcaswen"); //同样也不会触发内存分配

    std::cout << "Allocations: " << s_MemoryAllocationCount << std::endl;
}


int main() 
{
    //Test1();
    //Test2();
    Test3();
}