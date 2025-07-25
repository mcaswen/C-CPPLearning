#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int ans[1010];
int gus[1010];
int n = 0;

int main() {

    int cnt = 0;
    while (cin >> n && n != 0) {
        
        cnt++;
        cout << "Game " << cnt << ":" << endl;

        for (int i = 1; i <= n; i++) {

            cin >> ans[i];

        }
        
        while (1) { 
            
            int cnt1 = 0;
            int cnt2 = 0;
            int isend = 0;

            for (int i = 1; i <= n; i++) {

                cin >> gus[i];
                
                if (!gus[i]) {
                    
                    isend = 1;
                
                }
                
                for (int j = 1; j <= n; j++) {
                    if (gus[i] == ans[j] && i == j) {

                        cnt1++;
                    
                    }
                }                                           
            }
            
            if (isend)
                break;
             
            for (int i = 1; i <= 9; i++) {
                int c1 = 0, c2 = 0;                
                
                for (int j = 1; j <= n; j++) {
                    if (ans[j] == i)
                        c1++;
                    if (gus[j] == i)
                        c2++;

                }

                cnt2 += min(c1, c2);
                       
            }     
            
            cout << "    (" << cnt1 << "," << cnt2 - cnt1 << ")" << endl;

        }

    }

    return 0;
}