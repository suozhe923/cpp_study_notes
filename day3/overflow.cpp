#include <iostream>
using namespace std;

int main(){
    int a = 56789;
    int b = 56789;
    int c = a * b;
    cout << "c = " << c << endl;
}

//?会输出c = -1069976775！！
//?56789 is 0xDDD5 c = 3224990521（0xC0397379)
//?0x代表16进制， 16进制每两个字符相当于2进制的八位，一个字节八个bit，int一般4个字节，32位，第一位用来表示正负（0正1负）
//?C大于8，显然c超过了int范围
//?使用unsigned int 可解决此问题，因为第一位也表示数值
//?大部分系统int32位（但不一定）

long int ;//for longer integers
short int ;//两个字节
long long ;
//int 16/32 long int 32/64 long long 64

//sizeof(int) //返回当前系统 int的字节数，sizeof为操作符，函数参数必须是变量，sizeof 参数可以是int 或是int 类型的变量