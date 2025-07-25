#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

vector<vector<char>> map(10, vector<char>(10, 0));
vector<vector<int>> numbered(10, vector<int>(10, 0)); 
int row, col;

int main() {
    int puzzle_count = 0;

    while (true) {
        

        cin >> row;
        if (row == 0) break;

        if (puzzle_count) cout << endl;

        cin >> col;

        puzzle_count++;
        cout << "puzzle #" << puzzle_count << ":\n";

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> map[i][j];
                numbered[i][j] = 0;  
            }
        }

        int number = 1; 

        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (map[i][j] == '*') continue;  
                if (i == 0 || map[i - 1][j] == '*' || j == 0 || map[i][j - 1] == '*') {
                    numbered[i][j] = number++;  
                }
            }
        }

        vector<pair<int, string>> across_words;
        vector<pair<int, string>> down_words;

        // 生成横向单词
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (map[i][j] == '*' || (j > 0 && map[i][j - 1] != '*')) continue;

                string word = "";
                int start_number = numbered[i][j];  

                while (j < col && map[i][j] != '*') {
                    word += map[i][j];
                    j++;
                }

                across_words.push_back({start_number, word});
            }
        }

        // 生成纵向单词
        for (int j = 0; j < col; j++) {
            for (int i = 0; i < row; i++) {
                if (map[i][j] == '*' || (i > 0 && map[i - 1][j] != '*')) continue;

                string word = "";
                int start_number = numbered[i][j];  

                while (i < row && map[i][j] != '*') {
                    word += map[i][j];
                    i++;
                }

                down_words.push_back({start_number, word});
            }
        }

        // 输出横向单词
        cout << "Across\n";
        for (const auto& word : across_words) {
            printf("%3d.%s\n", word.first, word.second.c_str());
        }

        // 输出纵向单词
        
        sort(down_words.begin(), down_words.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
            
            return a.first < b.first;  // 按编号升序排序
        
        });
        
        cout << "Down\n";
        for (const auto& word : down_words) {
            
            printf("%3d.%s\n", word.first, word.second.c_str());
        
        }

        //cout << "\n";
    }

    return 0;
}
