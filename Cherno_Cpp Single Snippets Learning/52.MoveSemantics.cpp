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

    ~String()
    {
        std::cout << "Destroyed" << std::endl;
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
    Entity(const String& name) : m_Name(name) {}
    
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

int main()
{
    Test1();
}