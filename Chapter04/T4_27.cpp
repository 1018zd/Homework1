
/*
 * FileName: T4_27.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print the decimal value of a binary number
 */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,t=1,b=0;
    cin>>a;
    while(a>0)
    {
        if(a%10==1)b+=t;
        t=t*2;
        a=a/10;
    }
    cout<<b<<endl;
    return 0;
}
