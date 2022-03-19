

/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 输出一个5位整数的各个部位上的数。
 */

#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,d,e;
    cin>>n;
    a=n/10000;
    b=n%10000/1000;
    c=n%10000%1000/100;
    d=n%10000%1000%100/10;
    e=n%10000%1000%100%10;
    cout<<a<<"   "<<b<<"   "<<c<<"   "<<d<<"   "<<e<<endl;
    return 0;
}
