#include <iostream>
#include <vector>
using namespace std;

#define MAX 100005

vector <int> arr(MAX, 0);

int main() {

    int m;
    cin >> m;

    for (int i = 1; i <= 100000; i++) {

        int num = i;
        int sum = 0;
        sum += num;
        
        while (num > 0) {

            sum += num % 10;
            num /= 10;

        }
        
        if (arr[sum] == 0 || arr[sum] > i)
            arr[sum] = i;

    }

    for (; m ; m--) {
        int n;
        cin >> n;

        int isfound = 0;

        cout << arr[n] << endl;
    
    }


    return 0;
}