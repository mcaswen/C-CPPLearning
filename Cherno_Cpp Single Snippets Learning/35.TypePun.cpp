#include <iostream>

//内存访问与隐式转换
void test1() {

    int a = 50;

    double value0 = a; //隐式转换

    double value1 = *(double*)(&a); //内存复制，但是读入了错误的内存（多出的四个字节）
    //double value1 = *(reinterpret_cast<double*>(a));

    value1 = 20; //写入安全

    std::cout << value1 << std::endl;

    double& value2 = *(double*)(&a);
    //double& value2 = *(reinterpret_cast<double*>(a));
    value2 = 0.0; //危险，写入额外不属于它的内存

    std::cout << a << std::endl;

}

//结构体的内存布局
struct Entity {

    int x, y;

    Entity(int ix, int iy) 
        : x(ix), y(iy) {}

    int* GetPosition() {

        return &x;

    }

};

void test2() {

    Entity e(5, 8);

    int* arr = (int*)&e; //相当于一个指向数组0索引位置的指针
    //int* arr = reinterpret_cast<int*>(&e);

    std::cout << arr[0] << ", " << arr[1] << std::endl; //像访问数组一样访问结构体

    int y = *(int*)((char*)&e + 4); //从初始位置移动四个字节找到y
    //int y = *reinterpret_cast<int*>(reinterpret_cast<char*>(&e) + 4);
    
    std::cout << y << std::endl;

}

//无复制的内存访问
void test3() {

    Entity e(5, 8);

    int* pos = e.GetPosition();
    pos[0] = 2; //无任何复制
    
    int& x = e.x;
    x = 2;

}


int main() {

    //test1();
    test2();

}