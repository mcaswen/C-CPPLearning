#include <iostream>
#include <cstring>

using namespace std;

char s[85];

int main() {

    int TIME;
    cin >> TIME;

    while (TIME--) {
        
        memset(s, 0, sizeof(s));
        
        cin >> s;

        for (int T = 1; T <= strlen(s); T++) {

            int isfound = 1;
            
            if (strlen(s) % T == 0) {
            
                for (int i = T ; i < strlen(s); i++) {                
                        
                        if (s[i] != s[i % T]) {

                            isfound = 0;
                            break;

                        }


                }

            } else {

                isfound = 0;

            }
        
            if (isfound) {

                cout << T << endl;
                
                if (TIME >= 1)
                    cout << endl;
                
                
                break;

            }

        }

    }

    return 0;
}