#include <iostream>
#include <string>

int main() {

    const char* s = u8"Hello"; //utf-8
    char* p = (char*)s;

    //*(p + 5) = 'h'; 不能写入字符串常量区

    //std::cout << s << std::endl;

    char s2[] = {'m', 'c', 'a', 's', 'w', 'e', 'n'};

    std::cout << s2 << std::endl;

    std::string s3 = "Hello";
    s3 += "World";

    std::string s4 = std::string("Hello") + "World";

    bool contains = s3.find("el") != std::string::npos;

    const wchar_t* name2 = L"mcaswen2"; //通常一个字符占2字节

    const char16_t* name3 = u"mcaswen3"; //utf-16, 一个字符占2字节
    const char32_t* name4 = U"mcaswen4"; //utf-32, 一个字符占4字节

    //方便的字符串操作命名空间
    using namespace std::string_literals;

    std::string s9 = "Hello"s + " World";
    
    std::wstring s5 = L"Hello"s + L" World";
    std::u16string s6 = u"Hello"s + u" World";


    //自动对齐
    const char* s7 = R"(line1
    line2
    line3
    line4)";

    std::cout << "s7: " << s7 << std::endl;

    //自动拼接
    const char* s8 = "Line1\n"
        "Line2\n"
        "Line3\n";

    std::cout << "s8: " << s8 << std::endl;

}