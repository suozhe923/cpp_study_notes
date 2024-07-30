#include <iostream>
#include <cmath>
using namespace std;

float norm_l1(float x, float y);
float norm_l2(float x, float y);
float (&norm_ref)(float x, float y) = norm_l1;//norm_ptr是一个函数引用（function pointer），必须在声明时初始化

int main(){
    cout << "L1 norm of (-3, 4) = " << norm_ref(-3.0f,4.0f) << endl;
    return 0;
}

float norm_l1(float x, float y){
    return fabs(x) + fabs(y);//取绝对值
}
float norm_l2(float x, float y){
    return sqrt(x*x+y*y);
}