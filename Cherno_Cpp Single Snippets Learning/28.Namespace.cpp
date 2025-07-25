#include <iostream>

namespace apple { namespace functions { //嵌套命名空间

    void print() {}
}

    void print_again() {}

}

namespace orange {

    void print() {}


}

void test1() {

    using apple::print_again;

    print_again();
    apple::functions::print();

}

void test2() {

    //using namespace apple::functions;
    namespace af = apple::functions;

    af::print();

}