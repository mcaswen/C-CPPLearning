#include <iostream>

using namespace std;

typedef struct Gnode *Glist;

struct Gnode {

    int tag; // 标志域 0则为单元素节点，1则为广义表节点。
    union {
        int value;
        Glist sublist;

    }   UReign;

    Glist next;

};
