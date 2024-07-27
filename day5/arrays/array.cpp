#include <iostream>
using namespace std;

int main(){
    int array1[5]; //未初始化，会出现随机数
    int array2[5] = {0, 1, 2, 3, 4};
    int array3[5] = {0, 1}; // 未赋值的部分为0；
    //数组长度固定

    for(int i = 0; i < 5; i++)
        cout << array1[i] << " ";
    cout << endl;

    for(int i = 0; i < 5; i++)
        cout << array2[i] << " ";
    cout << endl;

    for(int i = 0; i < 5; i++)
        cout << array3[i] << " ";
    cout << endl;

    int len = 0;
    while (len < 10)
    {
        int array4[len] = {1, 2}; //用变量做数组长度,可初始化？！
        cout << "len = " << len;
        cout << ", sizeof(array4) = " << sizeof(array4) << endl;
        for (int i = 0; i < len; i++)
        {
            cout << array4[i] << ' ';
        }
        len++;
    }

    //不定长度的数组
    int num_array[] = {1, 2, 3, 4};//array of 4 int
    float array_sum(float values[], size_t length);
    float array_sum(float *values, size_t length);//两个函数声明等价
    
    //数组的复制
    int array_1[4] = {1,2,3,4};
    int array_2[4];
    //array2 = array1;//error!c和cpp中禁止更改地址
    //复制可依次复制或使用内存拷贝函数

    //const数组
    const float values[4] = {1.1f,1.2f,1.3f,1.4f};
    //values[i] 不可变
}