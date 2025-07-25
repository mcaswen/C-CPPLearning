#include <iostream>

using namespace std;

signed main() {

    int n;
    cin >> n;

    while (n--) {

        string s;
        cin >> s;

        int sum = 0;

        for (int idx = 0; idx < s.length(); idx++) {
            
            if (s[idx] == 'O') {   
                
                int cnt = 0;

                for (int i = idx; s[i] != 'X' && i < s.length(); i++) {
                    
                    cnt++;
                    idx++;
                    sum += cnt;

                }
            }
        }

        cout << sum << endl;
    }
    
    return 0;

}