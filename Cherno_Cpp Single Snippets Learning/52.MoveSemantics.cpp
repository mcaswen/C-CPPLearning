#include <iostream>

class String
{
public:
    String() = default;
    String(const char* string)
    {
        std::cout << "Created" << std::endl;

        m_Size = strlen(string);
        m_Data = new char[m_Size];
        memcpy(m_Data, string, m_Size);
    }
    
    String(const String& other)
    {
        std::cout << "Copied" << std::endl;

        m_Size = other.m_Size;
        m_Data = new char[m_Size];
        memcpy(m_Data, other.m_Data, m_Size);
    }

    //移动构造函数，相当于一个简化版的std::move
    String(String&& other) noexcept
    {
        std::cout << "Moved" << std::endl;

        m_Size = other.m_Size;
        m_Data = other.m_Data;
        
        other.m_Size = 0;
        other.m_Data = nullptr;
    }

    String& operator =(String&& other) noexcept
    {
        std::cout << "Moved" << std::endl;

        if (&other == this) return *this; //若相同对象则返回自己
        delete[] m_Data; //先清除数据再赋值指针，防止内存泄漏

        m_Size = other.m_Size;
        m_Data = other.m_Data;
        
        other.m_Size = 0;
        other.m_Data = nullptr;

        return *this;
    }

    ~String()
    {
        std::cout << "Destroyed" << std::endl;
        delete m_Data;
    }

    void Print() 
    {
        std::cout << m_Data << std::endl;
    }

private:
    char* m_Data;
    uint32_t m_Size;
};

class Entity
{
public:
    Entity(const String& name) //若传值，会优先调用移动构造（针对右值的优化），没有才会调用拷贝构造
        : m_Name(name) //复制了一遍，引用无法延续引用特性到另外一个对象的初始化上
    {}

    Entity(String&& name) //对右值的重载
        : m_Name(std::move(name))
    {}
    
    void PrintName()
    {
        m_Name.Print();
    }

private:
    String m_Name;

};

void Test1() 
{
    Entity entity(String("mcaswen"));
    entity.PrintName();
}

void Test2()
{
    String string = "Hello";
    String data = std::move(string); //调用移动构造函数

    data = std::move(string); //调用接受右值引用参数的赋值运算符，需手动实现

}

int main()
{
    Test1();
}