#include <iostream>
using namespace std;

int main(){
    int mat[2][3] = {{11,12,13}, {14,15,16}};

    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << mat[r][c] << ",";
        }
        cout << endl;
    }

    const float values[4] = {1.1f,1.2f,1.3f,1.4f};
    //values[i] 不可变
}

void init_2d_array(float mat[][3],size_t rows, size_t cols);
//void init_2d_array(float mat[][],//!error 因为内存的储存是一维的，不确定列的数量就无法储存
//size_t rows, size_t cols);
