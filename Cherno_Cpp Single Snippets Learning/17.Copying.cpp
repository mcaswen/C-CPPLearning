#include <iostream>
#include <string>

class String {

private:
    char* m_Buffer;
    unsigned int m_Size;

public:
    explicit String(const char* buffer) {

        m_Size = strlen(buffer);
        m_Buffer = new char[m_Size + 1];
        
        memcpy(m_Buffer, buffer, m_Size);
        m_Buffer[m_Size] = 0; //添加字符串终止符

    }

    ~String() {

        delete[] m_Buffer;

    }

    //拷贝构造函数
    String(const String& other) 
        : m_Size(other.m_Size) {

        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
        //不必自己添加终止符，构造函数中已经保证

        }

    char& operator[] (unsigned int index) {

        return m_Buffer[index];

    }

    friend std::ostream& operator<< (std::ostream& os, const String& string);

};

std::ostream& operator<< (std::ostream& os, const String& string) {

    os << string.m_Buffer;
    return os;

}

//最佳实践：const引用传值对象
void Print(const String& string) {

    //String copy = string; //自定义复制

    std::cout << string << std::endl;

}

int main() {

    String s0("mcaswen");
    String s1("");
    String s2 = s0;
    // s1 = s0; //浅拷贝，此时两个类中的m_Buffer的地址值完全相同，指向同一片内存

    s2[2] = 'e';

    Print(s0);
    Print(s2);

}//调用析构函数，对同一片内存释放两次，gg