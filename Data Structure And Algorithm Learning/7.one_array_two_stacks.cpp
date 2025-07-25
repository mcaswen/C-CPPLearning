#include <iostream>

using namespace std;

#define MAXSIZE 10000
typedef struct _TAS_ *tas;



struct _TAS_ {

    int arr[MAXSIZE];
    int top1 = -1;
    int top2 = MAXSIZE;

};

void Push(tas tas, int number, int tag) {

    if (tas->top2 - tas->top1 == -1)   
        cout << "The stack has been full." << endl;

    else if (tag == 1) {

        tas->top1++;
        tas->arr[tas->top1] = number;
  
    }    

    else {
        
        tas->top2--;
        tas->arr[tas->top2] = number;

    }

}

int Pop(tas tas, int number, int tag) {

    int curtop = 0;
    
    if (tag == 1) {

        if (tas->top1 == -1)
            cout << "The stack1 is empty" << endl;
        
        else {
            
            curtop = tas->arr[tas->top1];
            tas->arr[tas->top1] = 0;
            tas->top1--;
            return curtop;    
        
        }

    }

    else {

        if (tas->top2 == MAXSIZE)
            cout << "The stack2 is empty" << endl;
        
        else {
            
            curtop = tas->arr[tas->top2];
            tas->arr[tas->top2] = 0;
            tas->top2++;
            return curtop;
       
        }

    }

}