//inline建议编译器以inline的方式编译函数,只是建议
//内联函数inline function可以避免函数调用的代价（压栈、跳转等），在函数简单时可以提高效率
//相当于编译时把函数体直接移到代码中，避免了函数调用，但是需要更多存储空间（比宏更加安全）
#include <iostream>
using namespace std;

inline float max_function(float a, float b){
    if (a > b)
        return a;
    else return b;
}
// #define MAX_MACRO(a,b) a>b ? a : b  // num1&(0xEF>num2)&0xFF ? num1&0xEF:num2&0xFF由于&优先级比>低，导致出错，所有为了避免优先级问题，要加括号
#define MAX_MACRO(a,b) (a)>(b) ? (a) : (b)//标准格式

int main(){
    int num1 = 20;
    int num2 = 30;
    int maxv = max_function(num1,num2);
    cout << maxv << endl;
    maxv = max_function(num1++,num2++);
    cout << maxv << endl;//30

    num1 = 20;
    num2 = 30;

    maxv = MAX_MACRO(num1, num2);
    cout << maxv << endl;

    maxv = MAX_MACRO(num1++, num2++);//maxv = (num1++) > (num2++) ? (num1++) : (num2++)
    cout << maxv << endl;//31,虽然宏的效率很高，但是容易出错
    cout << "num1 = " << num1 << endl;//21
    cout << "num2 = " << num2 << endl;//32，在三目运算符中num2++了两次
    
    num1 = 0xAB09;
    num2 = 0xEF08;
    maxv = MAX_MACRO(num1&0xEF,num2&0xFF);
    cout << maxv << endl;

    return 0;
}