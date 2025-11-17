#include <iostream>
using namespace std;

// BMI 函式：傳回計算好的 BMI 值
double calcBMI(double weight, double height) {
    // height 以公尺計算
    return weight / (height * height);
}

int main() {
    double weight, height;

    cout << "請輸入體重(kg): ";
    cin >> weight;

    cout << "請輸入身高(m): ";
    cin >> height;

    double bmi = calcBMI(weight, height);
    cout << "您的 BMI 為: " << bmi << endl;

    // 可選：BMI 分類判斷
    if (bmi < 18.5)
        cout << "體重過輕\n";
    else if (bmi < 24)
        cout << "正常範圍\n";
    else if (bmi < 27)
        cout << "過重\n";
    else
        cout << "肥胖\n";

    return 0;
}