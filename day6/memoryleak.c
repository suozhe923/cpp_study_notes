//! malloc申请内存（为void*,在使用时需要先类型转换）
//! free释放内存
#include <stdio.h>
#include <stdlib.h>

void foo()
{
    int * p = (int * ) malloc(sizeof(int));
    return;
}//memory leak, 由于p为局部变量，在foo运行后会消失，这部分内存就泄露了，浪费了4（or8)个字节

int main()
{
    int * p = NULL;

    p = (int * ) malloc(4*sizeof(int));
    p = (int * ) malloc(8*sizeof(int));
    free(p);//the first p will not be freed

    return 0;
}