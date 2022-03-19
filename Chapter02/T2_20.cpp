
/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 7th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 输出圆的直径、周长和面积
 */

#include <iostream>

using namespace std;

int main()
{
    int r,d;//d表示圆的直径
    double C,S,pi;//C表示圆的周长S表示圆的面积
    cin>>r;
    d=2*r;
    pi=3.14159;
    C=2*pi*r;
    S=pi*r*r;
    cout<<d<<" "<<C<<" "<<S<<endl;
    return 0;
}
