Logical Expressions:
! not (if(!-2)为if(false))
&& and
|| or
（不同于& 和 |（这两个是二进制按位运算） ，&&和||是关于bool值的逻辑运算

int * p = new int[1024];
if (!p) //if(p = NULL)
    cout << "Memory allocation failed." << endl;
当p空指针时为0；
