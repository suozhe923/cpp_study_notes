//函数指针可作为一个参数传入函数
#include <iostream>
#include <cmath>
using namespace std;

float norm_l1(float x, float y);
float norm_l2(float x, float y);
float (*norm_ptr)(float x, float y);//norm_ptr是一个函数指针（function pointer）

int main(){
    norm_ptr = norm_l1;//给函数指针赋值
    cout << "L1 norm of (-3, 4) = " << norm_ptr(-3.0f,4.0f) << endl;
    norm_ptr = &norm_l2;//与上面的赋值操作等价
    cout << "L2 norm of (-3, 4) = " << norm_ptr(-3.0f,4.0f) << endl;
    return 0;
}

float norm_l1(float x, float y){
    return fabs(x) + fabs(y);//取绝对值
}
float norm_l2(float x, float y){
    return sqrt(x*x+y*y);
}