

#include <iostream>
using namespace std;

void calculate_average() {
    float scores[3];
    float average = 0;
    
    
    for (int i = 0; i < 3; ++i) {
        cout << "請輸入第" << i + 1 << "次分數: ";
        cin >> scores[i];
    }

    
    for (int i = 0; i < 3; ++i) {
        average += scores[i];
    }
    average /= 3;

    
    cout << "平均分數: " << average << endl;

    
    bool is_fail = false;
    for (int i = 0; i < 3; ++i) {
        if (scores[i] < 40) {
            is_fail = true;
            break;
        }
    }

    if (is_fail || average < 60) {
        cout << "此學科不及格" << endl;
    } else {
        cout << "此學科及格" << endl;
    }
}

int main() {
    calculate_average();
    return 0;
}


