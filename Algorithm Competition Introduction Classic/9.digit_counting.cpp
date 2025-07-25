#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int num[10];
int ans[10];

void get_digit(int i) {

    int cnt = 1;
     
    
    while (i > 0) {
        
        num[cnt] = i % 10;
        i /= 10;
        cnt++;

    }

    cnt--;

    for (int i = 1; i <= cnt; i++) {

        ans[num[i]]++;

    }

}

int main() {

    int TIME;
    cin >> TIME;

    while (TIME--) {

        int n;
        cin >> n;

        memset(ans, 0, sizeof(ans)); 

        for (int i = 1; i <= n; i++) {
            
            get_digit(i);

        }

        for (int i = 0; i <= 9; i++) {

            cout << ans[i];
        
            if (i < 9) {

                cout << " ";

            }

        }   

            cout << endl;
        
    
    }

    return 0;
}