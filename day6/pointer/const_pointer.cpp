#include <iostream>
using namespace std;

int main(){
    int num = 1;
    int another = 2;
    const int * p1 = &num;
    // *p1 = 3;//error
    num = 3;//okay
    //不能通过该指针改变对应变量的值

    int * const p2 = &num;
    *p2 = 3;//okay
    // p2 = &another;//error
    //不能改变指针指向的位置
    //数组就是一种不能改变地址的指针

    const int * const p3 = &num;
    //前两者都不可
}

