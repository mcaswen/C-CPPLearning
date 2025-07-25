#include <iostream>

using namespace std;

typedef struct A_queue *QUEUE;

const int MAXSIZE = 10;

struct A_queue {

    int rear = -1;
    int front = -1;
    int arr[MAXSIZE];

};

void add_queue(QUEUE queue) {

    if ((queue->rear + 1) % MAXSIZE == queue->front ) { //(9 + 1) % 10 = 0,以此实现数组的循环利用

        cout << "The queue is full." << endl;

    }

    else {

        cout << "Please enter the number u wanna add" << endl;
        int num;cin >> num;

        queue->rear = (queue->rear + 1) % MAXSIZE;
        queue->arr[queue->rear] = num;  


    }

}

int leave_queue(QUEUE queue) {

    if (queue->rear == queue->front) {
        
        cout << "The queue is empty." << endl;
        return NULL;
    
    }

    else {

        queue->front = (queue->front + 1) % MAXSIZE;
        return queue->arr[queue->front];

    }


}



