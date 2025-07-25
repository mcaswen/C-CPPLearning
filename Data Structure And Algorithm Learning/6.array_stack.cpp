#include <iostream>

using namespace std;

typedef struct STACK *stack;
#define MAXSIZE 10000

struct STACK
{
    int top = 0;
    int arr[MAXSIZE];

};





void Push(STACK *stack, int num) {

    if (stack->top >= MAXSIZE - 1) cout << "Stack is full." << endl;
    else {
        
        stack->top++;
        stack->arr[stack->top] = num;    

    }

}

int Pop(STACK* stack) {

    int curtop;
    if (stack->top == -1) cout << "Stack is empty." << endl;
    else {
        
        curtop = stack->arr[stack->top];
        stack->top--;

    }
    
    return curtop;

}