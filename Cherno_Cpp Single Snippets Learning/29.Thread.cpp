#include <iostream>
#include <thread>

bool is_Finished = false;

void Work() {

    using namespace std::literals::chrono_literals;

    std::cout << std::this_thread::get_id(); //this_thread当前线程

    while (!is_Finished) {

        std::this_thread::sleep_for(1.0s);

        /* for (int i = 0; i < 1e9; i++) {

            if (i % 1000000000 == 0)
                std::cout << "Working..." << std::endl;
        
        }*/  
    }

}

int main() {

    std::thread worker(Work); //立即开始线程

    if (std::cin.get() == '\n') {

        is_Finished = true;

    }

    worker.join();

    std::cout << std::this_thread::get_id();

    std::cout << "Finished" << std::endl;

}