//指针加减是以指针类型为单位的，如int * p; p++,地址会加一个int所占的字节数

#include <iostream>
using namespace std;

#define PRINT_ARRAY(array, n) \
for (int i = 0; i < (n); i++) \
    cout << "array[" << i << "] = " << (array)[i] << endl;

int main(){
    int numbers[4] = {0,1,2,3};
    PRINT_ARRAY(numbers, 4)

    int * p = numbers + 1;//指针偏移4个字节
    p++;//再次偏移4个字节

    cout << "numbers is " << numbers << endl;
    cout << "p = " << p << endl;//相差八个字节

    *p = 20;
    *(p-1) = 10;
    p[1] = 30;

    PRINT_ARRAY(numbers, 4)
}
