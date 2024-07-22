#include <iostream>
using namespace std;

int main(){
    unsigned char a = 255;
    unsigned char b = 1;
    int c = a + b;
    cout << "c is " << c << endl;
    return 0;
}

//output: 256 而不是0
//int, long, float, double:four kinds of operations
//若operands不是这四种，自动转为其类型，如上述代码进行Int运算