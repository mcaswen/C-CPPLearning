#include <iostream>
#include <string>
#include <algorithm>

namespace orange {

    void print(const char* string) {

        std::cout << string << std::endl;

    } 

}

namespace apple {

    void print(const std::string& string) { //隐式转换

        std::string temp = string;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;

    }

}

using namespace orange;
using namespace apple;


int main() {
    
    print("Hello"); //命名空间冲突下无任何报错（定义冲突等）

}