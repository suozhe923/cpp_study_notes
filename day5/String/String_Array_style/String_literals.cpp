#include <iostream>
using namespace std;

int main(){
    char name1[] = "Hello, world";
    char name2[] = "Hello, "  "world";
    char name3[] = "ABCD"; //此处字符串长度为4，数组长度为5（自动补0）

    const wchar_t s5[] = L"ABCD";
    const char16_t s9[] = u"ABCD";
    const char32_t s6[] = U"ABCD";

    cout << name1 << endl;
    cout << name2 << endl;
    cout << name3 << endl;
    cout << s5 << endl;
    cout << s9 << endl;
    cout << s6 << endl;

    // output:
    // Hello, world
    // Hello, world
    // ABCD
    // 0x61fdf6
    // 0x61fdec
    // 0x61fdd0
    //由于cout是标准输出，故后三者输出了16进制数
}

