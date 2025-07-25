#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

//sort的基本用法
void test1() {

    std::vector <int> values = {1, 4, 2, 3, 5, };

    std::sort(values.begin(), values.end());
    std::sort(values.begin(), values.end(), std::greater<int>()); //降序排列
    std::sort(values.begin(), values.end(), [](int a, int b) {

        return a < b;

    });

    for (int value: values) {

        std::cout << value << std::endl;

    }

}

//让1排在最后？
void test2() {

    std::vector <int> values = {1, 4, 2, 3, 5, };

    std::sort(values.begin(), values.end(), [](int a, int b) {

        if (a == 1) return false;
        else if (b == 1) return true;

        return a < b;

    });

    for (int value: values) {

        std::cout << value << std::endl;

    }

}

int main() {

    //test1();
    test2();

}