#include <iostream>
using namespace std;

struct Matrix{
    int rows;
    int cols;
    float * pData;
};

float matrix_max_v(Matrix a);
float matrix_max_r(Matrix & mat);//须在使用函数前先声明


int main(){
    int num = 0;
    int & num_ref = num; //num的引用，相当于给num起了一个别名，对应同一个数据
    //引用必须在声明时就初始化，在声明后初始化，难以与赋值区分
    cout << "num = " << num << endl;

    num_ref = 10;
    cout << "num = " << num << endl;

    Matrix a = {3,4};
    a.pData = new float[a.rows * a.cols]{1.0f,2.0f};
    float max_v = matrix_max_v(a);//Matrix mat = a,将a的值赋给了mat
    cout << a.cols << endl;//输出4，因为函数中更改的mat只是a的拷贝而非本体
    Matrix b = {3,4};
    b.pData = new float[b.rows * b.cols]{3.0f};
    float max_r = matrix_max_r(b);
    cout << b.cols << endl;//输出3，引用传递

    return 0;
}
float matrix_max_v(Matrix mat)//值传递！！！
{
    float max = __FLT_MIN__;
    for (int r = 0; r < mat.rows; r++)
        for (int c = 0; c < mat.cols; c++)
        {
            float val = mat.pData[r * mat.cols + c];
            max = (max > val) ? max : val;
        }
    mat.cols--;
    return max;
}
float matrix_max_r(Matrix & mat)//引用传递！！！若前面加上const，则不可更改（const Matrix & mat)
{
    float max = __FLT_MIN__;
    for (int r = 0; r < mat.rows; r++)
        for (int c = 0; c < mat.cols; c++)
        {
            float val = mat.pData[r * mat.cols + c];
            max = (max > val) ? max : val;
        }
    mat.cols--;
    return max;
}
