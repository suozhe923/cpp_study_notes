int foo(int * p){
    (*p) += 10;
    return *p;
}

int main(){
    int num1 = 20;
    int * p1 = &num1;
    int num2 = foo(p1);//理解为foo(int * p = p1)，即p所在内存存入了与p1所在内存存储的相同值，这个值是num1的地址
    return 0;
}
//num1 == num2 == 30