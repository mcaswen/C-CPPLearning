#include <iostream>
#include <variant>
#include <fstream>

void Test1() {

    std::variant <std::string, int> data;

    data = "mcaswen";
    std::cout << std::get<std::string>(data) << std::endl;

    data = 2;
    std::cout << std::get<int>(data) << std::endl;

    //data = false;
    //std::cout << std::get<bool>(data) << std::endl; //抛出运行异常

    if (auto value = std::get_if<std::string>(&data)) { //传入数据指针，返回指向string的指针

        auto& v = *value;
        std::cout << v << std::endl;

    } else {

        std::cout << "Invalid data type!" << std::endl;

    }

}

//进阶：相比std::optional更详细的文件读取+错误码系统
//比单纯返回一个布尔值多更多信息
enum class ErrorCode {

    None = 0, NotFound = 1, NoAccess = 2

};

std::variant <std::string, ErrorCode> ReadFileAsString(std::string filePath) 
{
    std::ifstream stream(filePath);
    std::string value; 

    if (stream)
    {
        return value;
    } 
    else 
    {
        ErrorCode code;

        //处理逻辑
        /* if (0) {

            code = ErrorCode::None;

        } else if (1) {

            code = ErrorCode::NotFound;

        } */
        
        return code;
    }
    return ErrorCode::None;
}

void Test2() 
{
    auto data = ReadFileAsString("1");

    if (auto value = std::get_if<std::string>(&data) ) 
    {
        auto& v = *value;
    } 
    else 
    {
        //std::cout << std::get<ErrorCode>(data).ToString() << std::endl;
    }
}


int main() 
{

    //Test1();
    Test2();

}