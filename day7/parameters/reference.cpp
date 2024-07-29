#include <iostream>
using namespace std;

struct Matrix{
    int rows;
    int cols;
    float * pData;
};

int main(){
    int num = 0;
    int & num_ref = num; //num的引用，相当于给num起了一个别名，对应同一个数据
    //引用必须在声明时就初始化，在声明后初始化，难以与赋值区分
    cout << "num = " << num << endl;

    num_ref = 10;
    cout << "num = " << num << endl;

    return 0;
}

float matrix_max(Matrix & mat)//引用传递！！！若前面加上const，则不可更改（const Matrix & mat)
{
    float max = __FLT_MIN__;
    for (int r = 0; r < mat.rows; r++)
        for (int c = 0; c < mat.cols; c++)
        {
            float val = mat.pData[r * mat.cols + c];
            max = (max > val) ? max : val;
        }
}
float matrix_max(Matrix mat)//值传递！！！
{
    float max = __FLT_MIN__;
    for (int r = 0; r < mat.rows; r++)
        for (int c = 0; c < mat.cols; c++)
        {
            float val = mat.pData[r * mat.cols + c];
            max = (max > val) ? max : val;
        }
}