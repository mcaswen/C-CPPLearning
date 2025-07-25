#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

//基本语法
void ForEach0(const std::vector <int>& values, void(*func)(int)) {

    for (auto& value: values) {

        func(value);

    }

}

void ForEach1(const std::vector <int>& values, const std::function<void(int)>& func) {

    for (auto& value: values) {

        func(value);

    }

}

void test1() {

    std::vector <int> values = {1, 2, 3, 4, 5};

    int a = 5;

                //值传递  可修改值传递的值
    auto lambda =  [=](int value) mutable {
        
        a = 5;
        std::cout << a << std::endl;
    
    };
                    
    ForEach1(values, lambda);

    ForEach0(values, [](int value) {

        std::cout << value << std::endl;
    
    });

}

//常用场景1
void test2() {

    std::vector values = {1, 4, 5, 2, 3};
    auto it = std::find_if(values.begin(), values.end(), [](int value){

        return value > 3;

    });

    std::cout << *it << std::endl;

}

int main() {

    //test1();
    test2();

}