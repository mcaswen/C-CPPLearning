#include <iostream>
#include <tuple>

std::tuple<std::string, int> CreatePerson() {

    std::string Name = "";
    int Age = 0;
    
    return {Name, Age};

}


void Test1() {

    //原始写法，意义不明
    std::tuple<std::string, int> Person = CreatePerson();

    std::string name0 = std::get<0>(Person);
    int Age0 = std::get<1>(Person);


    //稍好，但还是有些冗余
    std::string name1;
    int Age1;

    std::tie(name1, Age1) = CreatePerson();

    //c++17!
    auto[name, age] = CreatePerson(); //直接声明并定义了两个变量
    std::cout << name << std::endl;


}