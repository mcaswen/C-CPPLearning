#include <iostream>
#include <chrono>
#include <vector>

//接近工业级的封装方式
template <typename T>
struct Array3D {

    int n;
    T* data;

    Array3D(int Inputn) 
    : n(Inputn){

        data = new T[n * n * n];

    }

    ~Array3D() {

        delete[] data;

    }

    T& at(int i, int j, int k) {

        return data[i * n * n + j * n + k];

    }

    const T& at (int i, int j, int k) const {

        return data[i * n * n + j * n + k];

    }

};

//或vector更常用
template <typename T>
struct Vector3D {

    int n;
    std::vector <T> data;

    Vector3D(int Inputn) 
    : n(Inputn){

        data = std::vector <T>(n * n * n);

    }

    T& at(int i, int j, int k) {

        return data[i * n * n + j * n + k];

    }

    const T& at(int i, int j, int k) const {

        return data[i * n * n + j * n + k];

    }

};

//多维数组的内存分配
void test1() {

    int* array = new int[50]; //分配200字节大小的内存，未存储任何整数
    
    //二维数组
    int** arr2d = new int*[50]; //同样分配200字节大小的内存，指针类型（4字节），也未存储任何整数

    for (int i = 0; i < 50; i++) {
        
        arr2d[i] = new int[50]; //现在arr2d[i]这个指针指向了一个50个元素的数组

    }

    //delete[] arr2d; //内存泄漏，储存的50个数组已分配内存，但无法再访问。

    //正确的释放方式，类似于初始化的逆序操作
    for (int i = 0; i < 50; i++) {
        
        delete[] arr2d[i]; 

    }

    delete[] arr2d;

    //三维数组
    int n = 10000;

    //初始化
    int*** arr3d = new int**[n];

    for (int i = 0; i < n; i++) {

        arr3d[i] = new int*[n];

        for (int j = 0; j < n; j++) {

            arr3d[i][j] = new int[n];

        }

    }

    //释放
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            delete[] arr3d[i][j];
    
    for (int i = 0; i < n; i++)
        delete[] arr3d[i];

    
    delete[] arr3d;

}

struct Timer { 

    std::__1::chrono::steady_clock::time_point start;
    float ms;

    Timer() {

        start = std::chrono::high_resolution_clock::now();

    }

    ~Timer() {

        auto end = std::chrono::high_resolution_clock::now();   
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
        
        std::cout << "Time used " << duration.count() << " ms" << std::endl;

    }

};

//多维数组遍历的内存开销验证
void ForEachArr3d(int*** arr3d, int n) {

    Timer timer;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                arr3d[i][j][k] = 0;

}

void ForEachArr1d(int* arr1d, int n) {

    Timer timer;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                arr1d[i * n * n + j * n + k] = 0;  // 三维转一维索引
}

void test2() {

    int n = 1000;

    int*** arr3d = new int**[n];

    for (int i = 0; i < n; i++) {

        arr3d[i] = new int*[n];

        for (int j = 0; j < n; j++) {

            arr3d[i][j] = new int[n];

        }

    }

    int* arr1d = new int[n * n * n];

    ForEachArr3d(arr3d, n);
    ForEachArr1d(arr1d, n);


    //别忘记释放！
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            delete[] arr3d[i][j];
    
    for (int i = 0; i < n; i++)
        delete[] arr3d[i];

    
    delete[] arr3d;
    delete[] arr1d;

}

int main() {

    test2();

}