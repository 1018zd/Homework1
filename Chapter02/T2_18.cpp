

/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 7th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: ����ϴ���"is large."��������"These numbers are equel."
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<" is alarge.";
    }
    else if(a==b)
    {
        cout<<"These numbers are equel.";
    }
    else cout<<b<<" is large."<<endl;
    return 0;
}
