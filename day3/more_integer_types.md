char: type for character,8-bit integer indeed!

signed char
unsigned char
char: either signed char or unsigned char

char c1 = 'C';
char c2 = 80;
char c3 = 0x50;
c1 == c2 == c3

bool 是cpp的关键词但是不是c的
bool width: 1 byte(8 bits); 虽然只需要一位，但是字节是最小单位
true(1) or false(0)
true & false 可以当数字运算

在C中一开始使用typedef 创造一个type:
typedef char bool;
#define true 1
#define false 0

since C99
#include <stdbool.h>

size_t: (由于计算机内存越来越大，如今用int不够表达内存大小)
unsigned integer
和sizeof 的结果是同一类型

since C++11
Defined in <cstdint>
int8_t
int16_t ...
uint8_t ...
uint64_t 

Some Useful Macros(宏)
INT8_MIN
INT32_MAX...