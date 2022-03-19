
/*
 * FileName: T4_36.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 19th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Encrypt and decrypt data
 */

#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,d;
    cin>>n;
    a=n/1000;
    b=n%1000/100;
    c=n%1000%100/10;
    d=n%1000%100%10;
    //encryption
    cout<<"encryption begin++++++++++\n"<<endl;
    a=(a+7)%10;
    b=(b+7)%10;
    c=(c+7)%10;
    d=(d+7)%10;
    cout<<"加密后的数据为"<<c<<d<<a<<b<<endl;
    cout<<"encryption end+++++++++++\n"<<endl;

    //decryption
    cout<<"decryption begin++++++++++\n"<<endl;
    a=(a+3)%10;
    b=(b+3)%10;
    c=(c+3)%10;
    d=(d+3)%10;
    cout<<"解密后的数据为"<<a<<b<<c<<d<<endl;
    cout<<"decryption end+++++++++++\n"<<endl;
    return 0;
}
