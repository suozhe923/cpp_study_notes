#include <cstdlib>  // for size_t
char* strcpy( char*dest, const char* src );//将src复制到dest（覆盖）
char *strncpy(char *dest, const char *src, size_t count);//count为最多拷贝的个数,可以防止越界
char *strcat( char *dest, const char *src);//将src复制到dest后（拼接）
int strcmp(const char *lhs, const char *rhs);//依次比较字符的大小，若左边第一个字符小，返回负值，反之正值，相同比较第二个字符，完全相同返回0