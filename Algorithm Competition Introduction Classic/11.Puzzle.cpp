#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

char sqa[10][10];
string s;

void dosqa(char opt, int &isvalid, int &x, int &y) {

    if (opt == 'A') {
        if (x - 1 >= 1) {
        
            char t = sqa[x][y];
            sqa[x][y] = sqa[x-1][y];
            sqa[x-1][y] = t;
            x--;

        }

        else {
            
            isvalid = 0;
            //cout << x << y << endl;
        
        }
    }

    else if (opt == 'B') {
        if (x + 1 <= 5) {
        
            char t = sqa[x][y];
            sqa[x][y] = sqa[x+1][y];
            sqa[x+1][y] = t;
            x++;  
        
        }

        else {
            
            isvalid = 0;
            //cout << x << y << endl;
        
        }
    
    }

    else if (opt == 'L') {
        if (y - 1 >= 1) {
        
            char t = sqa[x][y];
            sqa[x][y] = sqa[x][y-1];
            sqa[x][y-1] = t;
            y--;
        
        }

        else {
            
            isvalid = 0;
            //cout << x << y << endl;
        
        }
    
    }

    else if (opt == 'R') {
            if (y + 1 <= 5) {
            
                char t = sqa[x][y];
                sqa[x][y] = sqa[x][y+1];
                sqa[x][y+1] = t;
                y++;
            
            }

            else {
            
            isvalid = 0;
            //cout << x << y << endl;
        
        }
        
    }

    else {
        
        //cout << opt << endl;
        isvalid = 0;
    
    }
}

int main() {

    int cnt = 0;
    bool isend = false;
    int x = 10, y = 10;
    
    while (1) {

    if (cnt > 0) {
        
        //if (cnt > 1)

            //getline(cin, s);
        for (int i = 2; i <= 5; i++) {
            
            //cin.ignore();
            getline(cin, s);
            
            if (s.length() == 4)
                s += ' ';

            for (int j = 1; j <= 5; j++) {

                sqa[i][j] = s[j-1];

                if (sqa[i][j] == ' ') {

                    x = i;
                    y = j;
                    //cout << x << " " << y << endl;
                
                }            
            }

        }
        
        //cin.ignore();

        int isvalid = 1;

        while (true) {

            char opt;

            cin >> opt;

            if (opt == '0')
                break;

            if (isvalid)
                dosqa(opt, isvalid, x, y);

        }

        cin.ignore();

        cout << "Puzzle #" << cnt << ":" << endl;
        
        if (isvalid)

        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5; j++) 
                cout << sqa[i][j] << " ";

            cout << endl;
        }
        
        else 
            cout << "This puzzle has no final configuration." << endl;

    }
     
        cnt++;

        memset(sqa, '0', sizeof(sqa));
        
        getline(cin, s);

        if (s[0] == 'Z') {
            
            isend = true;
        
        }
        else for (int i = 1; i <= 5; i++) {

            sqa[1][i] = s[i-1];
            if (s[i-1] == ' ') {

                x = 1;
                y = i;
                //cout << x << " " << y << endl;
            }
        }       
          
        if (s.length() == 4)
            s += ' ';

        if (!isend && cnt > 1) {           
            
            cout << endl;
        
        }
    
        if (isend)
            break;
    
    }

    //cout << endl;

    return 0;

}