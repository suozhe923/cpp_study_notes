int foo(int x){
    x += 10;
    return x;
} 

int main(){
    int num1 = 20;
    int num2 = foo(num1);//可以理解为foo(int x = num1)，复制了num1的值
    return 0;
    //num1 = 20
    //num2 = 30
}