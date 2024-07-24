#include <iostream>
using namespace std;

int main(){
    char input_char;
    cin >> input_char;
    switch (input_char)
    {
    case 'a'://向下运行至break
    case 'A':
        cout << "Move left." << endl;
        break;
    case 'd':
    case 'D':
        cout << "Move right." << endl;
        break;
    default:
        cout << "Undefined key." << endl;
        break;
    }
}
//一旦case对应，就会一直往下执行代码，直到遇到break

