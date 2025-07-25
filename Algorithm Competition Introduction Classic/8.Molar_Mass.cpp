#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <cctype>

using namespace std;

vector <char> num(100, 0);
double data1[4];

double check(char al, int num) {

    double res = 0;

    if (al == 'C')
        res = data1[0] * num;

    else if (al == 'H')
        res = data1[1] * num;

    else if (al == 'O')
        res = data1[2] * num;

    else if (al == 'N')
        res = data1[3] * num;

    else  
        res = 0;

    return res;

}

signed main() {

    data1[0] = 12.01; data1[1] = 1.008; data1[2] = 16.00; data1[3] = 14.01;    
    
    int TIME;
    cin >> TIME;

    while (TIME--) {

        string s;
        cin >> s;

        double sum = 0;

        for (int idx = 0; idx < s.length(); idx++) {
            
            //cout << idx << endl;

            if (isalpha(s[idx])) {
                
                if (idx + 1 < s.length()) {
                    char temp = s[idx + 1];

                    if (isalpha(temp)) {

                        sum += check(s[idx], 1);
                        continue;

                    }

                    else {
                        
                        int cnt = 0;
                        int curalpha = s[idx];
                        
                        for (idx = idx + 1; isdigit(s[idx]) && idx < s.length(); ) {
                        
                            cnt++;
                            num[cnt] = s[idx] - '0';
                            //cout << cnt << " " << s[idx] << endl;
                            idx++;
                        
                        }

                        idx--;

                        int curnum = 0;

                        for (int i = 1; i <= cnt; i++) {
                            
                            int mi = pow(10, cnt - i);
                            curnum += num[i] * mi;

                        }
                    
                        sum += check(curalpha, curnum);                               
                
                    }

                }
  
                else 
                    sum += check(s[idx], 1);
                           
            }
        
        
        }
  
        cout << fixed << setprecision(3) << sum << endl;
    
    }

    return 0;
}




