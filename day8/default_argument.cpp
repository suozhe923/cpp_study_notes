#include <iostream>
#include <cmath>
using namespace std;

float norm(float x, float y, float z);
float norm(float x, float y, float z = 0);//设置z的默认参数
float norm(float x, float y = 0, float z);//设置y的默认参数，顺序不可逆，必须从尾部开始往前设置(可同时设置多个参数），且只能设置一次

int main(){
    cout << norm(3.0f) << endl;
    cout << norm(3.0f,4.0f) << endl;
    cout << norm(3.0f,4.0f,5.0f);
    return 0;
}



float norm(float x, float y, float z)
{
    return sqrt(x * x + y * y + z * z);
}