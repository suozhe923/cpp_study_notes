#include <iostream>
using namespace std;

int main(){
    float f1 = 2.34E+10f;
    float f2 = f1 + 10;

    cout << f1 << ':' << f2 << endl;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    cout << "f1 - f2 = " << f1 - f2 << endl;
    cout << "(f1 - f2 == 0) = " << (f1 - f2 == 0) << endl;
    return 0;
}

//发现f1 = f2， 因为采样进度不够

//对于浮点数比较
//if （f1 == f2) //bad
//(fabs(f1 - f2) < FLT_EPSILON) //good  //fabs为取绝对值 // float_伊普西隆

//inf(-inf) : Exponent=11111111,fraction = 0 无穷大
//nan : not a number Exponent=11111111,fraction != 0 