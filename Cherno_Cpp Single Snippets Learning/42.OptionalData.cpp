#include <iostream>
#include <fstream>
#include <optional>

//传统方法
std::string ReadFileAsString0(const std::string& filepath, bool& outSuccess) {

    std::ifstream stream(filepath);

    if (stream) {

        std::string result;
        //..read file

        stream.close();
        outSuccess = true;
        return result;

    } else {

        outSuccess = false;
        return std::string();

    }

}

void Test1() {

    const std::string FILEPATH;
    bool ReadIsSuccessed = false;

    std::string Data = ReadFileAsString0(FILEPATH, ReadIsSuccessed);

    if (!ReadIsSuccessed) {

        std::cout << "Read Failed" << std::endl;
        return;

    }
    //...

}

//c++17, std::optional
std::optional <std::string> ReadFileAsString1(const std::string& filepath) {

    std::ifstream stream(filepath);

    if (stream) {

        std::string result;
        //..read file

        stream.close();
        return result;

    } 

    return std::nullopt;

}

void Test2() {

    const std::string FILEPATH;

    std::optional <std::string> Data = ReadFileAsString1(FILEPATH);

    if (Data) {

        std::cout << "Read Failed" << std::endl;
        return;

    }

    std::string value = Data.value_or("Not present"); //无法打开时的默认值

    //...dealing logics

}