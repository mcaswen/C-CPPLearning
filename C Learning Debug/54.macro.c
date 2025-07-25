#include <stdio.h>
#define PI 3.1415926
#define PI2 2 * PI

#define PRT             \
    printf("%f\n", PI); \
    printf("%f\n", PI2)

int main(int argc, char const *argv[])
{

    printf("%f\n", 3.0 * PI2);

    PRT;

    printf("%s:%d\n", __FILE__, __LINE__);

    printf("%s,%s\n", __DATE__, __TIME__);

    return 0;
}
