#include <iostream>

//union在vector中的应用
struct Vector2 {

    float x, y;

};

struct Vector4 {

    /* Vector2 GetA() {

        return *(Vector2*)&x;

    } */ //过于丑陋原始
    union {
        struct {

            float x, y, z, w;

        };

        struct {

            Vector2 a, b;

        };

    };

};

void PrintVector2(const Vector2& v) {

    std::cout << v.x << ", " << v.y << std::endl;

}

void test1() {

    Vector4 vector = {1.0f, 2.0f, 3.0f, 4.0f};


    //将vector4视为两个vector2的叠加
    PrintVector2(vector.a);
    PrintVector2(vector.b);

    vector.z = 500.0f;

    PrintVector2(vector.a);
    PrintVector2(vector.b); 

}

int main() {

    test1();

}