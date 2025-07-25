#include <iostream>

using namespace std;

typedef struct _NODE_* node;

struct _NODE_ {

    int coef;
    int expon;
    node next;

};

typedef struct  _LIST_* list;


struct _LIST_ {

    node head;
    node tail;

};



void addNode(list p) {

    cout << "Please enter the num of the polynomial" << endl;
    int num;
    cin >> num;

    cout << "Please enter the expon and coef" << endl;

    for (; num; num--) {
        
        node q = (node)malloc(sizeof(struct _NODE_));
        cin >> q->expon >> q->coef;
        q->next = NULL;
               
        if (p->head == NULL) {
            p->head = q;
            p->tail = q;

        }
        else {
            
            p->tail->next = q;
            p->tail = q;

        }       
    
    }

    return;

}

void calculate(list p1, list p2, list pans) {

    node q1 = p1->head, q2 = p2->head;               
    
    while (q1 != NULL && q2 != NULL) {
        
        node qans = (node)malloc(sizeof(struct _NODE_));
        qans->next = NULL;

        if (q1->expon == q2->expon) {

            qans->expon = q1->expon;
            qans->coef = q1->coef + q2->coef;
            q1 = q1->next;
            q2 = q2->next;
        
        }

        else if (q1->expon > q2->expon) {
            
            qans->expon = q1->expon;
            qans->coef = q1->coef;
            q1 = q1->next;
        
        }

        else {
            
            qans->expon = q2->expon;
            qans->coef = q2->coef;
            q2 = q2->next;
        
        }

        if (pans->head == NULL) {
            pans->head = pans->tail = qans;
        } else {
            pans->tail->next = qans;
            pans->tail = qans;
        }

    }


    node remaining = (q1 != NULL) ? q1 : q2;
    
    while (remaining != NULL) {
        
        node qans = (node)malloc(sizeof(struct _NODE_));
        qans->expon = remaining->expon;
        qans->coef = remaining->coef;
        qans->next = NULL;

        pans->tail->next = qans;
        pans->tail = qans;

        remaining = remaining->next;
    }

    return;

}

void printList(list pans) {

    for (node p = pans->head; p != NULL; p = p->next) {
        
        if (p != pans->head && p->coef > 0)
            cout << " + ";
    
        cout << p->coef << "x^" << p->expon << " ";

    }

    return;
}

void freeList(list p) {
    node curr = p->head;
    while (curr != NULL) {
        node temp = curr;
        curr = curr->next;
        free(temp);
    }
    free(p);
}


int main() {

    list p1 = (list)malloc(sizeof(struct _LIST_));
    list p2 = (list)malloc(sizeof(struct _LIST_));
    list pans = (list)malloc(sizeof(struct _LIST_));

    p1->head = p1->tail = NULL;
    p2->head = p2->tail = NULL;
    pans->head = pans->tail = NULL;
    

    addNode(p1);
    int com = 1;
    
    if (com)
        addNode(p2);

    calculate(p1, p2, pans);

    printList(pans);    

    freeList(p1);
    freeList(p2);
    freeList(pans);

    return 0;
}