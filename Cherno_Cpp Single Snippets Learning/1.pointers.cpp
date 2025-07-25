#include <iostream>
#include <iomanip>

int main() {
    
    char arr[4] = {0, (char)255, 0, 0};

    arr[1] += 1;

    for (int i = 0; i < 4; ++i) {
        
        std::cout << "arr[" << i << "] = " << std::setw(3) << (int)(unsigned char)arr[i] << "  ";
        
        std::cout << "binary: ";
        for (int b = 7; b >= 0; --b)
            std::cout << ((arr[i] >> b) & 1);
        
        std::cout << std::endl;
    
    }

    

    unsigned char arr2[4] = {0, 255, 0, 0};
    
    arr2[1] += 1;
    
    for (int i = 0; i < 4; i++)
        std::cout << (int)arr2[i] << std::endl;

    short s = 255;
    char* p = (char*)&s;

    s += 1;

    std::cout << "第一个字节的int值: " <<(int)*(char*)p << " " << "第二个字节的int值: " << (int)*((char*)p+1) << std::endl;
  
}