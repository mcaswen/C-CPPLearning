#include <iostream>
#include <cstring>

using namespace std;

void testplus();
void testgetline();
void testsub();

int main(int agrc , char const* argv[]) {

    //testplus();
    //testgetline();
    testsub();

    return 0;
}


void testplus() {

    string c1 = "Hello";
    string c2 = " CPP!";
    string c3 = c1 + c2;

    string c4 = "Goodbye";
    string c5 = " C";
    string c6 = c4 + c5;

    cout << c3 << endl << c6 << endl;


}

void testgetline() {

    string a;
    getline(cin, a);

    cout << "Hello mcaswen" << endl << a.length();

}

void testsub() {

    string s;

    getline(cin, s);

    string s_sub = s.substr(6, 5);
    string s_sub2 = s.substr(11);

    cout << s << endl << s_sub << endl << s_sub2;


}