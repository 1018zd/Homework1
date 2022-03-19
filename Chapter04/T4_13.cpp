
/*
 * FileName: T4_13.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Calculate car mileage
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   long double x,y;//x��ʾ��ʻ��Ӣ������y��ʾ���͵ļ�����
   long double z;//z��ʾÿ������ʻ��Ӣ����
   long double sum1=0.0;//sum1��ʾ���м����ۺϼ������Ӣ����
   long double sum2=0.0;//sum2��ʾ���м����ۺϼ�����ܼ�����
   cin>>x>>y;
   while(x!=-1)
   {
       z=x/y;
       sum1+=x;
       sum2+=y;
       cout<<"Enter miles driven (-1 to quit): "<<x<<endl;
       cout<<"Enter gallons used: "<<y<<endl;
       cout<<"MPG this trip: "<<fixed<<setprecision(6)<<z<<endl;
       cout<<"Total MPG: "<<fixed<<setprecision(6)<<sum1/sum2<<endl;
       cin>>x>>y;
   }
   cout<<"Enter the miles used(-1 to quit): -1"<<endl;
   return 0;
}
