预处理运行在编译之前
预处理指令： define, undef, include, if, ifdef, ifndef, else, elif, endif, line, error, pragma
每个预处理指令只能占一行
#include "mul.hpp"
int main(){
    //
}

经过Preprocess变成

int mul(int a, int b);
int main(){
    //
}

经过Compile变成

main.o(Binary object file)

宏
#difine PI 3.14
编译前会将所有PI替换为3.14