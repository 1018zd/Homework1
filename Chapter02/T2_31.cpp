
/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 输出每日开车花费的费用
 */


#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,e,sum;
    cin>>a>>b>>c>>d>>e;
    sum=d+e+b*(a/c);
    cout<<"每天开的总英里数："<<a<<"\n"<<endl;
    cout<<"每加仑汽油的价格："<<b<<"\n"<<endl;
    cout<<"每加仑汽油可以开的平均英里数："<<c<<"\n"<<endl;
    cout<<"每日的停车费："<<d<<"\n"<<endl;
    cout<<"每日的通行费："<<e<<"\n"<<endl;
    cout<<"每日开车花费的费用："<<sum<<endl;
    return 0;
}
