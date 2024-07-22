#include <iostream>
using namespace std;

int main(){
    char c1 = 'C';
    char c2 = 80;
    char c3 = 0x50;
    char16_t c4 = u'哈';//c++11
    char32_t c5 = U'哈';//c++11
    cout << c1 << ":" << c2 << ":" << c3 << endl;
    cout << +c1 << ":" << +c2 << ":" << +c3 << endl;
    //添加加号使得output其整数值
    cout << c4 << endl;
    cout << c5 << endl;
}
//output:
//C:P:P
//67:80:80
//21704
//21704