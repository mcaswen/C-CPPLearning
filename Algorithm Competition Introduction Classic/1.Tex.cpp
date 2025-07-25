#include <iostream>

using namespace std;

int main() {

    char c, q = 1;

    while ((c = getchar()) != EOF) {
        if (c == '"') {
            cout << (q ? "``" : "''");
            q = !q;

        }
        else 
            cout << c;

    }

    return 0;
}