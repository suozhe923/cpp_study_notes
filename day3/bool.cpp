#include <iostream>
using namespace std;

int main(){
    bool b1 = true;
    int i = b1;
    bool b2 = -256; //非 0 就为 1
    cout << "i=" << i << endl;
    cout << "b1=" << b1 << endl;
    cout << "b2=" << b2 << endl;
    cout << true << endl;
}