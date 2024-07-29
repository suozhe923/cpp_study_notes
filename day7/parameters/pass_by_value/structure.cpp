#include <iostream>
using namespace std;

struct Matrix{
    int rows;
    int cols;
    float * pData;
};

float matrix_max(Matrix mat)
{
    float max = __FLT_MIN__;
    for (int r = 0; r < mat.rows; r++)
        for (int c = 0; c < mat.cols; c++)
        {
            float val = mat.pData[r * mat.cols + c];
            max = (max > val) ? max : val;
        }
    mat.cols = 0;//值传递检验
    return max;
}

int main(){
    Matrix a = {3,4};
    a.pData = new float[a.rows * a.cols]{1.0f,2.0f};
    float max = matrix_max(a);//Matrix mat = a,将a的值赋给了mat
    cout << a.cols << endl;//输出4，因为函数中更改的mat只是a的拷贝而非本体
    Matrix c = a;
    c.cols -- ;
    cout << a.cols;
}