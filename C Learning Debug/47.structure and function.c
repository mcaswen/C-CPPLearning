#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};

int numberofdays(struct date d); // 在函数内声明一个新的结构变量，并返回调用者的结构的值
bool isleap(struct date d);
//struct date getdate(); 太繁琐
void getdate(struct date *); 

int main()
{
    struct date *today =  (struct date *)malloc(sizeof(struct date));
    struct date tomorrow;
   
    getdate(today); 

    if (today->day != numberofdays(*today))
    {

        tomorrow.day = today->day + 1;
        tomorrow.month = today->month;
        tomorrow.year = today->year;
    }
    else if (today->month != 12)
    {

        tomorrow.day = 1;
        tomorrow.month = today->month + 1;
        tomorrow.year = today->year;
    }
    else
    {

        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today->year + 1;
    }

    printf("Tommorow's date is %i-%i-%i\n", tomorrow.day, tomorrow.month, tomorrow.year);

    free(today);
    
    return 0;
}

int numberofdays(struct date d)
{

    const int daysofmonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int days;

    if (d.month == 2 && isleap(d))
        days = 29;

    else
        days = daysofmonth[d.month - 1];

    return days;
}

bool isleap(struct date d)
{

    bool leap = false;

    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
        leap = true;

    return leap;
}

/*struct date getdate() {  //通过在函数内定义结构变量，传值赋值

       struct date today; 
       
       printf("Please input today's date(day month year):\n");
       
       scanf("%i %i %i",&today.day,&today.month,&today.year);

        return today;
}
*/
void getdate(struct date * today) {

    printf("Please input today's date(day month year):\n");
       
    scanf("%i %i %i", &today->day, &today->month, &today->year); //p->day == (*p).day

}