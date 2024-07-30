//递归函数
#include <iostream>
using namespace std;

void div2(double val){
    cout << "Entering val = " << val << endl;

    if (val > 1.0)
        div2(val/2);
    else
        cout << "-----------------" << endl;
    cout << "leaving  val = " << val << endl;
}

int main(){
    div2(1024);
    return 0;
}