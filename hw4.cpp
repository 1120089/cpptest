#include <iostream>
using namespace std;
void adding();          //沒有傳回值及參數, 需宣告為 void 型別 

int main()
{
  for (int i = 0; i < 3; i++) // 呼叫 adding() 三次 
    adding();
}

void adding(void)
{
  int num = 100;       // 局部變數 
  cout << "num = " << num++ << endl;
}