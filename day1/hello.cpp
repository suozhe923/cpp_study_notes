#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout <<endl;
}

//编译指令
//g++ hello.cpp --std=c++11 -o hello
//此处std 用于指定cpp版本， o 用于命名