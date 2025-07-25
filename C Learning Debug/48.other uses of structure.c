#include<stdio.h>

struct Time {
    
    int second;
    int minute;
    int hour;

};

struct Date {
    
    int day;
    int month;
    int year;

};
//

struct point {

    int x;
    int y;

};

struct rectangle {

    struct point pt1;
    struct point pt2;

};



int main() {

    struct Time testTime[100];
    struct Time testTimes[] = {{12,12,12},{12,59,10},{1,29,5}}; //结构数组

    struct DateandTime {    //结构中的结构

        struct Time Timenow;
        struct Date Today;

    };
    //
    struct rectangle *rp,r;

    rp = &r;

    (*rp).pt1.x = 0;
    r.pt1.x = 0;
    rp->pt1.x = 0;
    (r.pt1).x = 0;
    (rp->pt1).x = 0;
    // rp->pt1->x = 0; 以上几种等价，这个不行，因为pt1不是指针



    return 0;

}
