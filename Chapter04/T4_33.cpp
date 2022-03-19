
/*
 * FileName: T4_33.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 17th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Judge whether to form a  right triangle
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int m,n,p;
    cin>>a>>b>>c;
    m=a*a+b*b-c*c;
    n=a*a+c*c-b*b;
    p=b*b+c*c-a*a;
    if(a>0&&b>0&&c>0)
    {
        if(m==0||n==0||p==0)
            cout<<"这三个数可以表示一个直角三角形的三条边"<<endl;
        else cout<<"这三个数可以不表示一个直角三角形的三条边"<<endl;
    }
    else cout<<"这三个数可以不表示一个直角三角形的三条边"<<endl;
    return 0;
}
