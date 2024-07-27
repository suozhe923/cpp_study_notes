#include <iostream>
using namespace std;

union ipv4address{
    std::uint32_t address32;
    std::uint8_t address8[4];
};
//所有成员共享同一片内存(同一地址起点），内存大小由最大的成员决定

int main(){
    union ipv4address ip;

    cout << "sizeof(ip) = " << sizeof(ip) << endl;

    ip.address8[3] = 127;
    ip.address8[2] = 0;
    ip.address8[1] = 0;
    ip.address8[0] = 1;

    cout << "The address is ";
    cout << +ip.address8[3] << ".";
    cout << +ip.address8[2] << ".";
    cout << +ip.address8[1] << ".";
    cout << +ip.address8[0] << endl;

    cout << std::hex; //将cout改为16进制输出
    cout << "in hex " << ip.address32 << endl;
}

