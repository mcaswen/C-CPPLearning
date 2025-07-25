#include <iostream>
#include <array>

template <typename T, std::size_t Size> //模版参数自动推导
void PrintArray(const std::array <T, Size>& array) {

    for (const auto& ele: array) {

        std::cout << ele << " ";

    }

}

int main() {

    std::array <int, 3> arr = {1, 2 ,3};
    PrintArray(arr);

}