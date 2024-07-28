#include <iostream>
using namespace std;

int main(){
    int num = 10;
    int * p = &num;
    int ** pp = &p;//指针的指针
    *(*pp) = 20;

    cout << "num is " << num << endl;
}