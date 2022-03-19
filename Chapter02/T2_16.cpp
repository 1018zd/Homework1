

/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 6th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 计算两个数的和、乘积、差和商。
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b,sum,x,y,z;//sum表示两个数的和，x表示两个数的乘积，y表示两个数的差，z表示两个数的商
    cin>>a>>b;
    sum=a+b;x=a*b;y=a-b;z=a/b;
    cout<<"和："<<sum<<" "<<"乘积："<<x<<" "<<"差："<<y<<" "<<"商："<<z<<endl;
    return 0;
}
