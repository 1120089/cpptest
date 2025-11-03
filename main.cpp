#include <iostream>
using namespace std;

int main() {
    int i = 1; // 外層控制「被乘數」

    while (i <= 9) {
        int j = 1; // 內層控制「乘數」
        while (j <= 9) {
            cout << i << " x " << j << " = " << i * j << "\t";
            j++;
        }
        cout << endl; // 換行
        i++;
    }

    return 0;
}
