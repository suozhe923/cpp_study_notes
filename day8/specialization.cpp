#include <iostream>
#include <typeinfo>
using namespace std;

struct Point
{
    int x;
    int y;
};

template<typename T>//T为泛型
T sum(T x, T y){
    cout << "The input type is " << typeid(T).name() << endl;
    return x +y;
}
template double sum<double>(double,double);
template char sum<>(char, char);
template int sum(int,int);//三种显式实例化的写法（编译器也会根据函数的调用自动生成隐式的实例化）

template<>//特例化必须在template后面加<>
Point sum<Point>(Point p1, Point p2){
    cout << "The input type is " << typeid(p1).name() << endl;
    Point p;
    p.x = p1.x + p2.x;
    p.y = p1.y + p2.y;
    return p;
}


int main(){
    auto val = sum(4.1,5.2);
    cout << val << endl;

    Point p1 {1,2};
    Point p2 {2,3};
    Point p = sum(p1,p2);
    cout << "p = (" << p.x << ", " << p.y << ")" << endl;
    return 0;
}