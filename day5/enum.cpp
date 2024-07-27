#include <iostream>
using namespace std;

enum color {White, Black, Red, Green,Num_color}; //Num_color对应值恰好等于4，即颜色数；
//也可赋值给enum里的值
//enum color {White=1, Black=2, Red=4, Green=8,Num_color=16};

int main(){
    enum color pen_color = Red;
    pen_color = color(3);//类型转换后赋值给pen_color;
    cout << pen_color; //output 3;
}
