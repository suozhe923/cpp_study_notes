Constant numbers:
95 // decimal 十进制
0137 // octal 八进制
0x5F // hexadecimal 十六进制

95 // int
95u // unsigned int 
95l // long
95ul //unsigned long
95lu //同上

6.02e23 // 6.02 x 10 ^ 23

6.02e23L //long double
6.02e23f //float
6.02e23 //double

类型限定符：
const
const float PI = 3.1415926f; //PI 不能再被修改
auto
auto a = 2; //int;
auto b = 2.3; // double;
auto c; //valid in C, error in C++;
auto d = a * 1.2; //double;
ps: a 的类型在初始化就会确定 若再令a = 3.3, a的值会变为3；

arithmetic operators
+a (可以将char型打印成整数)
-a 取相反数
~a 按位取反，a的二进制中0，1全部对调
a << b a 左移b位 即*（2^b）
a >> b a 右移b位

优先级
a++
++a
* /
+ -
<< >>