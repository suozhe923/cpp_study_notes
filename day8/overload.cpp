//cpp有函数重载，但是c没有
#include <iostream>
using namespace std;

int sum(int x, int y){
    cout << "int" << endl;
    return x+y;
}
// float sum(float x, float y){
//     cout << "float" << endl;
//     return x+y;
// }
//函数名相同，参数列表不同即为不同函数，即函数重载
//若只有返回值类型不同，是不能重载的
//在函数没有重载时，若参数类型不符合，会发生隐式转化

int main(){
    cout << sum(1,1.0f);
    //注释掉float sum后输出2，否则编译失败,因为会有歧义
}