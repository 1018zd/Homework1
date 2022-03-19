


/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 8th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 读入两个数输出第一个数是否为第二个数的倍数。
 */

#include <iostream>

using namespace std;

int main()
{
    int n1,n2,m;
    cin>>n1>>n2;
    m=n1%n2;
    if(m!=0)
    {
        cout<<"第一个数不是第二个数的倍数。"<<endl;
    }
    else
    {
        cout<<"第一个数是第二个数的倍数。"<<endl;
    }
    return 0;
}
