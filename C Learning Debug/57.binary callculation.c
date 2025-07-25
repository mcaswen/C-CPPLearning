#include <stdio.h>

int main(int agrc, char const* argv[] ) {

    int number = 0;

    scanf("%d", &number);
    printf("\n");

    unsigned mask = 1u << 31;

    for (; mask; mask >>= 1) {

        printf("%d", number & mask ? 1 : 0);

    }

    return 0;

}