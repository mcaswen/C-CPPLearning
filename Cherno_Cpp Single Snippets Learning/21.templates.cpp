#include <iostream>

template <typename T>
void Print(T x) {

    std::cout << x << std::endl;

}

template <typename T, int Size>
class Array {

private:
    T arr[Size]; //合法，编译时常量

public:

    int GetSize() const {

        return Size;

    }
};

int main() {

    Print(1);
    Print(1.2);
    Print("mcaswen");

    Array <std::string, 5> arr;

    Print(arr.GetSize());

}