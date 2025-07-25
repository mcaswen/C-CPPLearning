#include <iostream>

using namespace std;

class Point3d {

    public:
        Point3d(float x, float y, float z);
        void print();

    private:
        float x;
        float y;
        float z;

} ;

int main() {

    Point3d a(1, 2, 3);
    a.print();

    return 0;
}