//p->member相当于(*p).member即p所指向的struct的member变量
#include <iostream>
#include <cstring>
using namespace std;

struct Student{
    char name[4];
    int born;
    bool male;

};

int main(){
    Student stu = {"Liu",2005,true};
    Student * pStu = &stu; //让pStu指向stu所在地址

    cout << stu.name << " was born in " << stu.born << ". Gender: " << (stu.male ? "male" : "female") << endl;

    strncpy(pStu->name,"Li",4);//将Li00复制到stu的name
    pStu->born = 2001;//相当于 (*pStu).born = 2001;
    pStu->male = false;

    cout << stu.name << " was born in " << stu.born << ". Gender: " << (stu.male ? "male" : "female") << endl;

    cout << "Address of stu: " << pStu << endl;
    cout << "Address of stu: " << &stu << endl;
    cout << "Address of member name: " << &(pStu->name) << endl;
    cout << "Address of member born: " << &(pStu->born) << endl;
    cout << "Address of member male: " << &(pStu->male) << endl;
    cout << "sizeof(pStu) = " << sizeof(pStu) << endl;//输出4或8，取决于32位还是64位电脑
}

