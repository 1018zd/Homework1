
/*
 * FileName: T4_32.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 17th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Judge whether to form a triangle
 */

#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a>0&&b>0&&c>0)
    {
        if(a+b>c&&a+c>b&&b+c>a)cout<<"这三个值可以表示一个三角形的三条边"<<endl;
        else cout<<"这三个值不可以表示一个三角形的三条边"<<endl;
    }
    else cout<<"这三个值不可以表示一个三角形的三条边"<<endl;
    return 0;
}
