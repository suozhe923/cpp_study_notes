//可将数组名看作指针，但是对数组名取地址，得到的不是指针的指针，而是它本身的指针
//可以将指针看作数组取p[1]即为p+1的地址
#include <iostream>
using namespace std;

struct Student{
    char name[4];
    int born;
    bool male;

};
int main(){
    Student students[128];
    Student * p0 = &students[0];
    Student * p1 = &students[1];
    Student * p2 = &students[2];
    Student * p3 = &students[3];//指针指向数组各项对应位置，此处每个地址相差12个字节(为Student'size)
    cout << sizeof(Student) << endl;//12
    cout << sizeof(students) << endl;//1536
    cout << sizeof(p0) << endl;//8(4 or 8)
    cout << sizeof(double *) << endl;//8(4 or 8)
    cout << sizeof(int *) << endl;//8(4 or 8)

    cout << "p0 = " << p0 << endl;
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    cout << "p3 = " << p3 << endl;

    cout << "&students = " << &students << endl;
    cout << "students = " << students << endl;//对数组名取地址指向该数组指向的地址，即&student和student指向同一个地址；
    cout << "&students[0] = " << &students[0] << endl;//数组0位指向的地址即数组首地址，因此这三行输出相同

    Student * p = students;//将students地址赋给了指针p，则p[o]相当于student[0]
    p[0].born = 2000;
    p[1].born = 2001;
    p[2].born = 2002;

    cout << "students[0].born = " << students[0].born << endl;
    cout << "students[1].born = " << students[1].born << endl;
    cout << "students[2].born = " << students[2].born << endl;
}
