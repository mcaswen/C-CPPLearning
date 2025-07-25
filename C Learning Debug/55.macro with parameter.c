#include <stdio.h>

#define cube(x) ((x) * (x) * (x))

#define radiodeg1(x) (x * 57.3)
#define radiodeg2(x) (x) * 57.3 //错误案例

int main(int argc, char const *argv[]) {

    printf("%d\n", cube(5));

    printf("%f\n", radiodeg1(5 + 2));
    
    printf("%f\n", 180 / radiodeg2(7));
    
    
    return 0;

}