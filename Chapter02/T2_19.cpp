

/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 7th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 输出三个数的和、平均值、乘积、最小值和最大值
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,sum,ave,pro,min,max;
    cin>>a>>b>>c;
    cout<<"Input three different integers: "<<a<<" "<<b<<" "<<c<<"\n";
    sum=a+b+c;
    ave=sum/3;
    pro=a*b*c;
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
    cout<<"Sum is "<<sum<<"\n";
    cout<<"Average is "<<ave<<"\n";
    cout<<"Product is "<<pro<<"\n";
    cout<<"Smallest is "<<min<<"\n";
    cout<<"Largest is  "<<max;
    return 0;
}
