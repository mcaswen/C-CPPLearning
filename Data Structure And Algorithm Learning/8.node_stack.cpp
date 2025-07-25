#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct SNODE *Stack;

struct SNODE {

    int value;
    SNODE *next;

};

Stack create_stack() {

    Stack s;

    s = (Stack)malloc(sizeof(Stack));

    s->next = NULL;

    return s; 

}

int isEmpty(Stack s) {

    return (s->next == NULL);

}

void Push(Stack s) {

    cout << "Please enter the number u wanna push" << endl;
    
    int num;
    while(1) {
   
        cin >> num;
        
        if (num == -1) break;

        Stack top = (Stack)malloc(sizeof(Stack));
        top->value = num;
        top->next = s->next;

        s->next = top;
    }

}

int Pop(Stack s) {

    if (isEmpty(s)) {
        
        cout << "The stack is empty." << endl;
        return NULL;

    }    

    else {
        
        Stack top = s->next;
        s->next = top->next;
        int top_value = top->value;

        free(top);
        
        return top_value;
    }
}