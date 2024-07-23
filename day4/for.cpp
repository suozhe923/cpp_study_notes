#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for(int i = 0; i < 10; i++){ //for(; i < 0; )语法是正确的,for(;;)也可以，虽然是死循环
        sum += i;
        cout << "Line " << i << endl;
    }
    cout << "sum = " << sum << endl;

float mysquare(float value);//函数声明
    float a = mysquare(3.0f);
    cout << "a is " << a << endl;
}
//展示goto
float mysquare(float value){
    float result = 0.0f;

    if (value >= 1.0f || value <= 0){
        cerr << "The input is out of range." << endl;//c error
        goto EXIT_ERROR;
    }
    result = value * value;
    return result;
    EXIT_ERROR:
    //do sth such as closing files here
    return 0.0f;
}