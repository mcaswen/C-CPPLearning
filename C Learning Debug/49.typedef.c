#include <stdio.h>

int main()
{

    typedef long int_64;
    typedef struct ADATE
    {
        int day;
        int month;
        int year;

    } Date;

    typedef char* String[10]; //String 是十个字符串的数组的类型
    
    typedef struct node anode; //anode 可用来代替 struct node;
    
    int_64 x = 1000;

    Date d = {30, 2, 2024};

    return 0;
}