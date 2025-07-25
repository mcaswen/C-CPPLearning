#include <iostream>

#define PR_DEBUG 1 //最佳实践
#define PR_RELEASE 

#if PR_DEBUG == 1
#define Log(x) std::cout << x << std::endl
#elif defined(PR_RELEASE) //另一种方式
#define Log(x)
#endif

//enter的转译
#define MAIN int main() { \ 
std::cout << 1 << std::endl;\
}

MAIN