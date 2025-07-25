#include <iostream>
#include <map>

using namespace std;

void createmap() {

    map <string, int> m;

    m["Hello"] = 0;
    m["World"] = 1;

    //cout << "Hello: " << m["Hello"] << endl;
    //cout << "World: " << m["World"] << endl;

    for (auto p = m.begin(); p != m.end(); p++)
        cout << p->first << ":" << p->second << endl; //因为是string类型以ascll码的大小排序进行输出


}

int main(int argc, char const* argv[]) {

    createmap();
    
    return 0;
}

