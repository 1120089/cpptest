#include <iostream>  
using namespace std;

int main() {
    int sum = 0; 

    for (int i = 1; i <= 10; i++) { 
        sum += i; 

        if (i % 2 == 0) { 
            cout << "偶數：" << i << endl;
        }
    }

    cout << "1 到 10 的總和是：" << sum << endl;

    return 0;
}
