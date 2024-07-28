#include <iostream>
using namespace std;

struct Student
{
    int name;
};

int main(){
    int * p1 = new int;//默认的初始化，对于基本类型来说就是随机值
    int * p2 = new int();//初始化为0
    int * p3 = new int(5);//初始化为5
    int * p4 = new int{};//c++11
    int * p5 = new int{5};//c++11
    cout << "p1 = " << *p1 << endl; 
    cout << "p2 = " << *p2 << endl;
    cout << "p3 = " << *p3 << endl;
    cout << "p4 = " << *p4 << endl;
    cout << "p5 = " << *p5 << endl;

    delete p1;

    Student * ps1 = new Student;
    Student * ps2 = new Student{3};
    cout << "Student1's name = " << ps1->name << endl;
    cout << "Student2's name = " << ps2->name << endl;

    delete ps1;

    int * pa1 = new int[16];
    int * pa2 = new int[16]();
    int * pa3 = new int[16]{};
    int * pa4 = new int[16]{1,2,3};

    delete pa1;
    delete []pa2;//对于基本类型，有无括号都可

    Student * psa1 = new Student[16];
    Student * psa2 = new Student[16]{{1},{2}};//c++11

    delete psa1;
    delete []psa2;//都会回收内存，但是前者只调用第一个元素的destructor,后者调用所有元素的destructor

}

