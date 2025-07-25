#include <iostream>
#include <vector>

using namespace std;

void createarray() {

    vector <int> a1; //空数组
    
    a1.resize(10); //分配十个元素的空间 初始化为0
    
    for (int i = 0; i < 10; i++) {

        a1[i] = i;
        cout << a1[i] << " ";

    }

    a1.push_back(10);

    cout << a1[10] << endl;

    vector <int> a2(10, 2); //初始化10个空间，每个空间中的元素都赋值为2
    vector <int> a3(10);    //同上，但每个元素都初始化为0

    for (int i = 0; i < 10; i++) {

        cout << a3[i] << " ";

    }

}

void loop() {   //无需设置开头结尾的遍历

    vector <int> v(10);

    v.push_back(11);

    for (auto p = v.begin(); p != v.end(); p++) //v.begin 位于0号位置， v.end位于最后一个元素的下一个位置
        cout << *p << " ";

}

int main(int argc, char const* argv[]) {

    //createarray();

    loop();

    return 0;
}