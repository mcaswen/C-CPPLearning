#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

using namespace std;

clock_t start1, start2, end1, end2;

double duration1, duration2;


void calculate1(int x, int n);
void calculate2(int x, int n);

int main() {

    start1 = clock();
    calculate1(10, 10);
    end1 = clock();
    duration1 = ((double) (end1 - start1)) / CLK_TCK;

    cout << "duration1 =" << duration1 << endl;

    start2 = clock();
    calculate2(10, 10);
    end2 = clock();
    duration2 = ((double) (end2 - start2)) / CLK_TCK;

    cout << "duration2 =" << duration2 << endl;



    return 0;


}

void calculate2(int x, int n) {

    vector <int> arr(n ,0);

    int i = 0;
    for (auto p = arr.begin(); p != arr.end(); p++) {

        *p = 1;

    }
    double sum = arr[n];

    for (int j = n; j; j--) {

        sum = arr[j - 1] + sum * x;

    }

    cout << "result2 =" << sum << endl;

}

void calculate1(int x, int n) {

    vector <int> arr(n ,0);

    int i = 0;
    for (auto p = arr.begin(); p != arr.end(); p++) {

        *p = 1;

    }
    double sum = 0;

    for (int j = 0; j < n; j++) {

        sum += arr[j] * pow(x, j);

    }

    cout << "result1 =" << sum << endl;

}