#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;
const unsigned char prefix[] = {
    0xE6,0x91,0x84, // 摄
    0xE6,0xB0,0x8F, // 氏
    0xE6,0xB8,0xA9, // 温
    0xE5,0xBA,0xA6, // 度
    0xE6,0x98,0xAF, // 是
    0xEF,0xBC,0x9A, // ：
    0
};

signed main() {

    double t;
    cin >> t;
    cout.write(reinterpret_cast<const char*>(prefix), sizeof(prefix)-1);
    cout << fixed << setprecision(14) << (t - 32) / 1.8 << endl;

    return 0;

}