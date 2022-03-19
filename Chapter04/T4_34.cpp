
/*
 * FileName: T4_34.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 18th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Sllove the factorial problem
 */

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    //a����
    cout<<"a����begin++++++++++"<<endl;
    int n;
    cin>>n;
    int m=1;
    for(int i=1;i<=n;i++)
    {
        m*=i;
    }
    cout<<"n!= "<<m<<endl;
    cout<<"a����end++++++++++\n"<<endl;


    //b����
    cout<<"b����begin++++++++++"<<endl;
    double s=1.0;
    int n2,m2=1;
    cout<<"��������Ҫ��ľ��ȼ��ۼӵ�����n2"<<endl;
    cin>>n2;//n2��ʾ�ۼӵ�����
    if(n2==1)cout<<setiosflags(ios::fixed)<<setprecision(n2)<<"e="<<s<<endl;
    else
    {
        for(int j=1;j<=n2-1;j++)
    {
        m2*=j;
        s=s+1.0/m2;
    }
    cout<<setiosflags(ios::fixed)<<setprecision(n2)<<"e="<<s<<endl;

    }
    cout<<"b����end++++++++++\n"<<endl;


    //c����
    cout<<"c����begin++++++++++"<<endl;
    double p,k=0,s2=1,t,x,y=1;
    cin>>p>>x;
    while(k<p)
    {
        k++;
        s2=s2*k;
        t=1.0*pow(x,k)/s2;
        y+=t;
    }
    cout<<setiosflags(ios::fixed)<<setprecision(p+1)<<"y="<<y<<endl;
    cout<<"c����end++++++++++\n"<<endl;
    return 0;
}
