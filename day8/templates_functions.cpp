#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T>//T为泛型
T sum(T x, T y){
    cout << "The input type is " << typeid(T).name() << endl;
    return x +y;
}
template double sum<double>(double,double);
template char sum<>(char, char);
template int sum(int,int);//三种显式实例化的写法（编译器也会根据函数的调用自动生成隐式的实例化）

int main(){
    auto val = sum(4.1,5.2);
    cout << val << endl;
    return 0;
}