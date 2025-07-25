#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <tuple>
#include <utility>

void Fref(std::string& s0, std::string& s1) {

    s0 = "mcas";
    s1 = "wen";

    return;

}

void Fpointer(std::string* s0, std::string* s1) {

    *s0 = "mcas";
    *s1 = "wen";

    return;

}

std::string* Farrpointer() {

    std::string* strings = new std::string[2]; //内存泄漏？

    std::string s0 = "mcas";
    std::string s1 = "wen";
    
    strings[0] = s0;
    strings[1] = s1;

    return strings;

}

std::array <std::string, 2> Farray() {

    std::string s0 = "mcas";
    std::string s1 = "wen";

    std::array <std::string, 2> strings = {s0, s1};

    return strings;

}

std::vector <std::string> Fvector() {

    std::string s0 = "mcas";
    std::string s1 = "wen";

    std::vector <std::string> strings = {s0, s1};

    return strings;

}

std::tuple <std::string, std::string> Ftuple() {

    std::string s0 = "mcas";
    std::string s1 = "wen";

    return make_pair(s0, s1);

}

std::pair <std::string, std::string> Fpair() {

    std::string s0 = "mcas";
    std::string s1 = "wen";

    return make_pair(s0, s1);

}

struct strings {

    std::string s0;
    std::string s1;

};

strings Fstruct() {

    std::string s0 = "mcas";
    std::string s1 = "wen";

    return {s0, s1};

}

int main() {

    std::string s0, s1;

    Fref(s0, s1);
    Fpointer(&s0, &s1);

    std::string* strings0 = Farrpointer(); //返回数组大小未知
    //std::array <std::string, 2> strings0 = Farray();
    //std::vector <std::string> strings0 = Fvector();

    s0 = strings0[0];
    s1 = strings0[1];

    delete[] strings0; //必须释放内存

    auto strings1 = Ftuple();

    s0 = std::get<0>(strings1);
    s1 = std::get<1>(strings1);

    auto [s0, s1] = strings1;

    auto strings2 = Fpair();

    s0 = strings2.first;
    s1 = strings2.second;

    auto [s0, s1] = strings2;

    //最佳实践
    strings strings3 = Fstruct();

    s0 = strings3.s0; //变量名清晰，不是黑箱
    s1 = strings3.s1;

    auto [s0, s1] = strings3; //c++17， 更简洁

}
