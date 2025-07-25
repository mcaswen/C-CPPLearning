#include <iostream>
#include <cstring>

using namespace std;

#define maxn 10000000 + 10

signed main() {

    char s;
    int tot = 0;

    while (1) {

        scanf("%c", &s);
        
        if (s == '\n')
            break;
        
        if (s == '1')
            tot++;

    }

    cout << tot << endl;


    return 0;

}