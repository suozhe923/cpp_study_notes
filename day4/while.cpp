#include <iostream>
using namespace std;

int main(){
    int num = 10;
    while(num > 0){ //赋值操作a=2也算表达式
        if (num == 9)
        {
            num--;
            continue;//跳过该次循环到下一次循环
        }
        if (num == 5)
            break;//跳出循环
            
        cout << "num=" << num << endl;
        num--;
    }
    //do
    //{
    //  cout << "num=" << num << endl;
    //  num--;
    //}while (num > 0);
}

