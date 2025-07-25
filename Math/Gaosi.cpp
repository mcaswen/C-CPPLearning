#include <iostream>
#include <vector>

using namespace std;

vector<vector<double>> Resort(const vector<vector<double>>& matrix, int m, int n) {

    vector<vector<double>> rmatrix = matrix;
    // 按每行的非零位置布尔序列做字典序排序
    sort(rmatrix.begin(), rmatrix.end(), [&](const vector<double>& a, const vector<double>& b) {
        
        for (int col = 0; col < n; ++col) {
            
            bool na = !Equal(a[col], 0.0);
            bool nb = !Equal(b[col], 0.0);
            
            if (na != nb) {
                // 非零的行排前面
                return na;  
            }
        }
        
        return false;  // 完全相同就保持原序
    
    });
    
    return rmatrix;

}

bool Equal(double a, double b) {

    return abs(a - b) < 1e-5;

}

void Eliminate(vector <vector <double> >& matrix, const int & n,
                 const int & pivot, const int& row1, const int& row2) {

    double coe = matrix[row2][pivot] / matrix[row1][pivot];
    
    matrix[row2][pivot] = 0;

    for (int i = pivot + 1; i < n; i++) {

        matrix[row2][i] -= coe * matrix[row1][i];

    }

}

void Tri(vector<vector<double>>& A, int m, int n) {
    
    int curRow = 0;
    for (int col = 0; col < n && curRow < m; ++col) {
        // 1. 在 [curRow, m) 区间里找第一个非零当主元
        int iPivot = -1;
        for (int i = curRow; i < m; ++i) {
            if (!Equal(A[i][col], 0.0)) {
                iPivot = i;
                break;
            }
        }
        if (iPivot < 0) continue; 


        //但是有resort所以不需要了 
        //if (iPivot != curRow) swap(A[curRow], A[iPivot]); //在接下来的行中发现了比当前行更靠前的主元，
                                                        //把那个更靠前的主元所在的行作为主元行

        for (int i = curRow + 1; i < m; ++i) {
            if (!Equal(A[i][col], 0.0)) {
                Eliminate(A, n, col, curRow, i);
            }
        }

        ++curRow;
    }
}


int main() {

    cout << " Enter m n:";
    int m, n;
    cin >> m >> n;

    vector <vector <double> > matrix(m, vector <double>(n, 0));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {

            cin >> matrix[i][j];

        }

    Resort(matrix, m , n);
    Tri(matrix, m, n);





}