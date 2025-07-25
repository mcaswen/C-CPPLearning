#include <iostream>
#include <thread>
#include <chrono>
#include <sstream>

//利用chrono库实现的简单计时器
void test1() {

    using namespace std::literals::chrono_literals;

    auto start = std::chrono::high_resolution_clock::now();

    std::this_thread::sleep_for(1s);

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration <float> duration = end - start;

    std::cout << duration.count() << "s" << std::endl;

}

//利用作用域自动计时
struct Timer { 

    std::chrono::steady_clock::time_point start; //稳定
    //std::chrono::time_point <std::chrono::high_resolution_clock> start; //分辨率最高，但不稳定，且易受平台影响
    float ms;

    Timer() {

        start = std::chrono::steady_clock::now();

    }

    ~Timer() {

        auto end = std::chrono::steady_clock::now();   
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
        
        std::cout << "Time used " << duration.count() << " ms" << std::endl;

    }

};

void Loop() {

    Timer timer;
    std::ios::sync_with_stdio(false);
    std::ostringstream ss;

    for (int i = 0; i < 1000000000; i++) {

        //ss << "Hello\n";

    }

    //std::cout << ss.str();

}

void test2() {

    Loop();

}

int main() {

    //test1();
    test2();

}