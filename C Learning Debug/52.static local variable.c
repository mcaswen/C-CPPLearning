#include<stdio.h>

void f();

int main(int argc , char const *argv[]) {

    f();
    f();
    f();

    return 0;
}

void f() {

    static int x = 10;
    printf("in %s x = %d\n",__func__,x);

    x += 2;

    printf("agn in %s x = %d\n",__func__,x);

}