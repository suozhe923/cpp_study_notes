#include <iostream>
using namespace std;

int main(){
    std::string str1 = "Hello";
    std::string str2 = "SUSTech";
    std::string result = str1 + ", " + str2;

    cout << "result = " + result << endl;

    cout << "The length is 0" << result.length() << endl;

    cout << "str1 < str2 is " << (str1 < str2) << endl;
    
    return 0;
}