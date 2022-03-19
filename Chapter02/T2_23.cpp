
/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 输出5个数中最大值和最小值。
 */


#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,max,min;
    cin>>a>>b>>c>>d>>e;
    max=min=a;
    if(b>max)
    {
        max=b;
    }
    else if(b<min)
    {
        min=b;
    }
    if(c>max)
    {
        max=c;
    }
    else if(c<min)
    {
        min=c;
    }
    if(d>max)
    {
        max=d;
    }
    else if(d<min)
    {
        min=d;
    }
    if(e>max)
    {
        max=e;
    }
    else if(e<min)
    {
        min=e;
    }
    cout<<"max="<<max<<endl;
    cout<<"min="<<min<<endl;
    return 0;
}
