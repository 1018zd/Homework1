
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
        if(a+b>c&&a+c>b&&b+c>a)cout<<"������ֵ���Ա�ʾһ�������ε�������"<<endl;
        else cout<<"������ֵ�����Ա�ʾһ�������ε�������"<<endl;
    }
    else cout<<"������ֵ�����Ա�ʾһ�������ε�������"<<endl;
    return 0;
}
