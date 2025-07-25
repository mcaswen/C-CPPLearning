#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector < vector <char> > arr(55, vector <char> (1005, 0));
vector < vector <char> > loc_nums(1005, vector <char> (5, 0));
vector <int> ans_arr(1005, 0);


void cal_num(int m ,int n) {

    for (int i = 1; i <= m; i++) {

        for (int j = 1; j<= n; j++) {
            
            if (arr[i][j] == 'A') {

                loc_nums[j][1]++;

            }

            else if (arr[i][j] == 'C') {

                loc_nums[j][2]++;

            }

            else if (arr[i][j] == 'G') {

                loc_nums[j][3]++;

            }

            else if (arr[i][j] == 'T') {

                loc_nums[j][4]++;

            }

        }

    }

}

int main() {

    int Time;
    cin >> Time;

    while (Time--) {

        for (auto& row: arr) {

            fill(row.begin(), row.end(), 0);

        }

        for (auto& row: loc_nums) {

            fill(row.begin(), row.end(), 0);

        }

        fill(ans_arr.begin(), ans_arr.end(), 0);

        int m, n;
        cin >> m >> n;

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {

                cin >> arr[i][j];

            }

        }

        cal_num(m ,n);
        int ans_dis = 0;

        for (int i = 1; i <= n; i++) {
            
            int ans_loc = 0;

            for (int j = 1; j <= 4; j++) {
                
                if (ans_loc < loc_nums[i][j]) {

                    ans_arr[i] = j;
                    ans_loc = loc_nums[i][j];

                }

            }

            for (int j = 1; j <= 4; j++) {

                if (j == ans_arr[i])
                    continue;

                ans_dis += loc_nums[i][j];

            }
        
        }

        for (int i = 1; i <= n; i++) {

            if (ans_arr[i] == 1) cout << "A";
            if (ans_arr[i] == 2) cout << "C";
            if (ans_arr[i] == 3) cout << "G";
            if (ans_arr[i] == 4) cout << "T";

        }

        cout << endl;
        cout << ans_dis << endl;

    }
    
    return 0;

}