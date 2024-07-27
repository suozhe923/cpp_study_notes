#include <iostream>
#include <string.h>
#include <stdbool.h>
using namespace std;

struct Student
{
    char name[4];
    int born;
    bool male;
    void change_name(const char nn[4]){
        strcpy(name,nn);
    }
};
//cpp中结构体struct与java中的类class几乎一样，可以声明成员变量和成员方法，但c只有成员变量，且在后续声明中需要用struct Student作为类型）
//在储存成员变量时，四个字节以上的类型往往会存在以四的倍数（0，4，8等)为起点的地方，因此改变成员变量的顺序，会改变结构体的size！！！
//如此结构体bool占一个字节，若后面再加一个int型的成员变量，他们之间会空出3个字节的内存

int main(){
    Student zhu = {"Zhu",2005,true};//c需要为struct Student zhu ...
    Student ming = {"Min"};
    Student yus[100];
    yus[50].born = 2003;

    cout << "zhu borns in " << zhu.born << endl;
    cout << "ming is " << ming.name << endl;
    cout << "yus50 borns in " << yus[50].born << endl;
    cout << "zhu is " << zhu.name << endl;
    zhu.change_name("zz");
    cout << "zhu is " << zhu.name << endl;
}
