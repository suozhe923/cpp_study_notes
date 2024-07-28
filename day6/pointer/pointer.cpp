//指针变量在声明时要在type后加*
//指针变量里存的是一个地址（整数）
//&会得到一个object的地址
//*会得到一个pointer指向地址的内容

#include <iostream>
using namespace std;

int main(){
    int num = 10;
    int * p1 = NULL, * p2 = NULL;//NULL等于0
    p1 = &num;
    p2 = &num;
    cout << "num is " << num << endl;
    *p1 = 20;
    cout << "num is " << num << endl;
    *p2 = 30;
    cout << "num is " << num << endl;

}