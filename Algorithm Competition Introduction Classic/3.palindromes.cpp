#include <iostream>
#include <cstring>


using namespace std;

char rev[100] =  "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

char ans[4][100] = {" -- is not a palindrome.", " -- is a regular palindrome.", " -- is a mirrored string.", " -- is a mirrored palindrome."};

char REV(char i) {

    if (isalpha(i))
        return rev[i - 'A'];

    else 
        return rev[i - '0' + 25];

}

int main() {

    char s[100];

    while (1) {
        
        int end = scanf("%s", s);

        if (end != 1)
            break;

        int len = strlen(s);
        //cout << len << endl;
        int mi = 1;
        int hui = 1;

        for (int i = 0; i < (len + 1) / 2; i++) {

            if (s[i] != s[len - i - 1]) 
                hui = 0;

            if (REV(s[i]) != s[len - i - 1]) {
                //cout << REV(s[i]) << " " << s[len - i - 1] << endl;
                mi = 0;
            }
        
        }
        cout << s << ans[2 * mi + hui] << endl << endl;

    }

    return 0;
}