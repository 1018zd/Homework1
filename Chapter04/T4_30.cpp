
/*
 * FileName: T4_30.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 17th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Calculate the diameter, perimeter and area of the circle
 */


#include <iostream>

using namespace std;

int main()
{
    double r,d,C,S;
    cin>>r;
    double pi=3.14159;
    d=2*r;
    C=2*pi*r;
    S=pi*r*r;
    cout<<"d="<<d<<"\n"<<"C="<<C<<"\n"<<"S="<<S<<endl;
    return 0;
}
