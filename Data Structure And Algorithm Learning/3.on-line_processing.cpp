#include <iostream>

using namespace std;

int main() {

    int arr[10] = {-8, 9, -6, -2, -4, -1, 4, 2, 6, 7};

    int maxsum = 0;
    int cursum = 0;
    
    
    for (int i = 0; i < 10; i++) {

        cursum += arr[i];

        if (cursum > maxsum) //更新最大子列
            maxsum = cursum;

        if (cursum < 0) //当前子列失去成为最大子列的可能，断开并从下一个位置开始寻找新子列
            cursum = 0;

    
    }

    cout << maxsum << endl;


}