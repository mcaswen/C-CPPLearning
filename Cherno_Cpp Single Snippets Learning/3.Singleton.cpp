#include <iostream>

class Singleton {

public:

    int x = 0;

    static Singleton& Get() {

        static Singleton Instance;
        return Instance;

    }

    void Hello() {

        x++;

        std::cout << "In this Singleton, x = " << x << std::endl;

    }

};

int main() {

    Singleton::Get().Hello();
    Singleton::Get().Hello();


}