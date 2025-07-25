#include<stdio.h>
#include<stdlib.h>

typedef struct _Node {

    int value;
    struct _Node *next;

}   node;

typedef struct _List {

    node *head;
    node *tail;
} List ;



void add(int number , List* list);
void printlist(List* list);
void seek(List* list);
void deleteelement(List* list, int number);
void freelist(List* list);

int main() {

    int number = 0;
    List list;
    list.head = NULL;
    list.tail = NULL;

    while (1) {

        scanf("%d", &number);       
        
        if (number == -1) break;

        add(number, &list);
    
    }

    //printlist(&list);

    seek(&list);


    return 0;
}

void add(int number , List* list) {

    // add to the list
    node *p = (node*)malloc(sizeof(node));
    p->next = NULL;
    p->value = number;

    if (list->head == NULL) {

        list->head = p;
        list->tail = p;

    }   else {

        list->tail->next = p;
        list->tail = p;

    }

}

void printlist(List* list) {

    for(node *p = list->head;p != NULL; p = p->next)
        printf("%d ", (p->value));

}


void seek(List* list) {

    int isfound = 0;
    int number = 0;
    int cnt = 0; 
    printf("please enter the number u want to delete:\n");
    scanf("%d", &number);

    for (node* p =list->head; p != NULL; p = p->next) {

        if (p->value == number) {

            printf("I got it!\nIt's in the %dth\n", cnt + 1);
            
            isfound = 1;
            
            deleteelement(list, number);
            
            printlist(list);
            
            break;   
        }
        cnt++;


    }
    if (isfound == 0) printf("not found\n");

}

void deleteelement(List* list, int number) {

    node *q; node *p = list->head;
    for (q = NULL; p ; q =p , p = p->next)

           if (p->value == number) {
                if (q) {
                    q->next = p->next;
                    if (p->next == NULL) // 如果删除的是尾节点，更新尾指针
                        list->tail = q;
                    
                    printf("delete complete\n");
                    free(p);
                    break;
           
           }   else list->head = p->next;
           
           }


}

void freelist(List* list) {

node *p = list->head;node *q;

while(!p) {

        q = p->next;
        free(p);
        p = q;
}

}   