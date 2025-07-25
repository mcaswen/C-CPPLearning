#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

 struct ListNode {

    int arr[10000];
    int* last;

};

typedef ListNode* List;

List createarray() {

    List list = (List)malloc(sizeof(List));
    int i;

    int size;
    cout << "Please type the array's size:" << endl;
    cin >> size;

    for (i = 0; i < size; i++) {
        list->arr[i] = i + 1;

    }
    list->last = &(list->arr[i]);

    return list;
}

void seekele(List list) {

    int ele;

    cout << "Please type the element u want to find" << endl;
    cin >> ele;
   
    int isfound = 0;
    for (int i = 0; &(list->arr[i]) != list->last; i++) {
        
        if (list->arr[i] == ele) {
            cout << "Element is in the " << i + 1 << "th." << endl;
            isfound = 1;
            break;
        }
    }
        if (!isfound)
            cout << "Not Found" << endl;

}

void insert(List list) {

    int num;
    int loc;

    cout << "Please input the location and the number u wanna insert:" << endl;
    cin >> loc >> num;

    if (&(list->arr[loc]) > list->last + 1) 
        cout << "location invalid" << endl; 

    else if(list->last == &(list->arr[9999]))
        cout << "array's size limited" << endl;

    else {
        for (int *j = list->last; j >= &(list->arr[loc]); j--) {

            *(j+1) = *j;

        }
        
        list->arr[loc] = num;
        list->last++;
        
        cout <<"Insert complete" << endl;

    }

}

void printarray(List list) {

    for (int j = 0; &(list->arr[j]) != list->last; j++) {

        cout << list->arr[j] << "\t" <<  " ";
        if ((j+1) % 10 == 0)
            cout << endl;

    }

}

void deletearray(List list) {

    cout << "Please enter the location u wanna delete:" << endl;
    int loc;
    cin >> loc;

    if (loc < 1 || &(list->arr[loc]) > list->last)
        cout << "Invalid location" << endl;

    else {
        for (int* j = &(list->arr[loc]); j <= list->last; j++) {

            *(j - 1) = *j;
            
        }
        list->last--;
        
    }
}





int main() {

    List list;

    list = createarray();

    //seekele(list);
    //insert(list);
    deletearray(list);

    printarray(list);
    
    return 0;

}