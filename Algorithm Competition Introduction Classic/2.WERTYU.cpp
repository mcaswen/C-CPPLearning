#include <iostream>
#include <cstring>

using namespace std;

string s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

char arr[1000];

int main() {

    strcpy(arr, s.c_str());

    char c;

    while ((c = getchar()) != EOF) {
        int isfound = 0;
        
        for (int i = 0; arr[i] != '\0'; i++) {
            
            if (arr[i] == c) {
                cout << arr[i-1];
                isfound = 1;
                break;
            
            }
        }
        
        if (!isfound)
            cout << c;

    }

    return 0;
}