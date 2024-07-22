#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float f1 = 1.2f;
    float f2 = f1 * 1000000000000000;
    cout << std::fixed <<std::setprecision(15) << f1 << endl;
    cout << std::fixed <<std::setprecision(15) << f2 << endl;
    return 0;
}
//output:
//1.200000047683716
//1200000038076416.000000000000000

//float第0位到第22位为fraction(小数)，第23到30为exponent,第31为sign