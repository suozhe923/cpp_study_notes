#include <iostream>
using namespace std;

int main(){
    int num_array[5];

    for(int i = -1; i <= 5; i++)
        num_array[i] = i * i;
    
    for(int i = -1; i <= 5; i++)
        cout << "num_array[" << i << "] = " << num_array[i] <<endl;

    //数组越界，但是语法没有问题，编译时不会除错，但是超过应用程序的内存边界，操作系统会杀死程序

    return 0;

}
//c和cpp中数组是一块连续的内存，数组的名字指向首地址（与java中数组是对象不同，c和cpp中数组不是对象），优点在于不进行边界检查，效率更高
//output:
// num_array[-1] = 1
// num_array[0] = 0
// num_array[1] = 1
// num_array[2] = 4
// num_array[3] = 9
// num_array[4] = 16
// num_array[5] = 25

