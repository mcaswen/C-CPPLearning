#include <iostream>

using namespace std;

void printN(int arr[], int n);

int main() {

    int arr[100000];
    int cnt = 0;

    for (int i = 0;i < 100000;i++) {
        arr[i] = i + 1;

    }

    printN(arr, 100000);

    return 0;
}

void printN(int arr[], int n) {

    if (n) {
        
        printN(arr, n-1);
        cout << arr[n-1] << " ";

    }

} 