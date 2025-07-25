#include <stdio.h>

int gall;
void f();

int main()
{

    printf("gn in %s = %d\n", __func__, gall);

    f();

    printf("agn in %s = %d\n", __func__, gall);

    return 0;
}

void f()
{

    printf("gn in %s = %d\n", __func__, gall);

    gall += 2;

    printf("agn in %s = %d\n", __func__, gall);
}