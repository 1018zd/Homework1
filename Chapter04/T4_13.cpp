
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
   long double x,y;//x表示行驶的英里数，y表示用油的加仑数
   long double z;//z表示每加仑行驶的英里数
   long double sum1=0.0;//sum1表示所有加油综合计算的总英里数
   long double sum2=0.0;//sum2表示所有加油综合计算的总加油量
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
