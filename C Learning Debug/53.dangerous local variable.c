#include <stdio.h>

int *g();
int *f();

int main(int argc, char const *argv)
{

    int *p = f();
    printf("*p=%d\n", *p);

    g();

    printf("*p=%d\n", *p);

    return 0;
}

int *f()
{

    int x = 12;
    printf("%x\n", &x);
    return &x;
}

int *g()
{

    int y = 24;
    printf("%x\n", &y);
    return &y;
}