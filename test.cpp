#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    // 輸入華氏溫度
    cout << "請輸入華氏溫度: ";
    cin >> fahrenheit;

    // 計算攝氏溫度
    celsius = (fahrenheit - 32) * 5 / 9;

    // 輸出結果
    cout << "攝氏溫度是: " << celsius << "°C" << endl;

    return 0;
}