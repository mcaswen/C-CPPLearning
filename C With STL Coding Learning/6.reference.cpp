#include <iostream>

using namespace std;

void f(int &y) {

    y += 10;

}

int main(int argc, char const*agrv[]) {

    int x = 10;
    int &ref = x;
    ref += 1;

    cout << "x=" << x << " ref=" << ref << endl;

    int y = 1;

    f(y);
    cout << "y=" << y << endl;

    return 0;
}