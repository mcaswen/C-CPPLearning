#include <iostream>

class Entity {};


int main() {

    int* a = new int; //4 bytes
    int* arr = new int[50]; //200 bytes

    Entity* e0 = new Entity();
    Entity* earr = new Entity[50](); //在堆中的同一行连续分配50个Entity

    Entity* earr2 = (Entity*)malloc(50 * sizeof(Entity)); //与new的区别是没有调用构造函数

    delete[] earr2;

}