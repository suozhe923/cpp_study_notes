#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char rabbit[16] = {'P','e','t','e','r'};
    cout << "String length is " << strlen(rabbit) << endl; // strlen只显示字符串长度而非数组长度
    for (int i = 0; i < 16; i++)
        cout << i << ":" << +rabbit[i] << "(" << rabbit[i] << ")" << endl;
    
    char bad_pig[9] = {'P','e','p','p','a',' ','P','i','g'};//没有以0结尾，bad one
    char good_pig[10] = {'P','e','p','p','a',' ','P','i','g','\0'};
    cout << "Rabbit is (" << rabbit << ")" << endl;
    cout << "Pig's bad name is (" << bad_pig << ")" << endl; // 输出结果为Pig's bad name is (Peppa PigPeter)，这意味着数组越界，读取了Peter存储的区域，所以必须以0结尾！！！
    cout << "Pig's good name is (" << good_pig << ")" << endl;

    char name[10] = {'Z', 'u', '\0', 'm'};
    cout << name << endl;
    //会打印Zu但不会出现m因为已经被\0截断；
    return 0;
}

