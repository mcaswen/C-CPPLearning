#include <stdio.h>

int main()
{

    struct date
    {
        int day;
        int month;
        int year;
    }; // 结构类型
    struct date today; // 结构变量

    today.day = 21;
    today.month = 10;
    today.year = 2024;

    struct date todaydate = {21, 10, 2024};
    struct date thismonth = {.month = 10, .year = 2024};
    struct date *ptoday = &today;
    
    today = (struct date) {20,6,2023};
    today = todaydate;
    
    printf("today's date is %i-%i-%i\n", today.year, today.month, today.day);
    printf("This month is %i-%i-%i\n",
           thismonth.year, thismonth.month, thismonth.day); // 未声明的结构变量自动被初始化为0

    return 0;
}