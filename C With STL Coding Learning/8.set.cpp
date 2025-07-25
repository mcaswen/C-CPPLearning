#include <iostream>
#include <set> //集合，元素各不相同，从小到大排序

using namespace std;

void creatset() {

    set <int> a; //a后无括号， 不能带参数

    a.insert(99); a.insert(3); a.insert(2);

    for (auto p = a.begin(); p != a.end(); p++) 
        cout << *p << " ";

}

void seekset() {

    set <int> a;

    for (int i = 1; i <= 100; i++) 
        a.insert(i);

    cout << (a.find(3) != a.end()) << endl; //若为1, 则前者返回的指针不等于后者，
                                            //也就是在寻找到最后一个元素前就找到了该元素,反之亦然

    cout << (a.find(101) != a.end()) << endl;


}

void eraseset() {

    set <int> a;

    for (int i = 1; i <= 100; i++) 
        a.insert(i);

    for (int i = 50; i <= 100; i++) 
        a.erase(i);

    for (auto p = a.begin(); p != a.end(); p++) 
        cout << *p << " ";
}




int main(int agrc, char const* argv[]) {

    //creatset();
    //seekset();
    eraseset();

    return 0;
}