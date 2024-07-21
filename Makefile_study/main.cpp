#include <iostream>
#include "mul.hpp"

using namespace std;
int main(){
    int a, b;
    int result;

    cout << "Pick two integers:";
    cin >> a; // 标准输入
    cin >> b;

    result = mul(a,b);

    cout << "The result is " << result << endl; //标准输出
    return 0;
}


//! 多文件编译时往往采用先编译再链接（合并）的方式提高效率
//! g++ -c main.cpp  --只编译不链接(生成main.o)
//! g++ -c mul.cpp --同上
//! g++ main.o mul.o -o mul --链接（link)
//! 若一起编译： g++ main.cpp mul.cpp -o mul
//! 用 Makefile 可提高效率

