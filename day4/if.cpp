#include <iostream>
using namespace std;

int main(){
    //Version1
    bool isPositive = true;
    int factor = 0;
    if(isPositive) //if括号中的值需要能隐式转化为bool，例如char,int,float,bool
        factor = 1;
    else
        factor = -1;
    //Version2
    factor = isPositive ? 1 : -1;//isPositive为ture则赋？后的值；false为冒号后
    //Version3
    factor = isPositive * 2 - 1;
    //前两种方法有跳转语句，会降低效率，这种方式可以提高效率
}

