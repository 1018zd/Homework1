
/*
 * FileName: T4_14.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Resolve credit line issues
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    double b,c,d,e,nb;
    cin>>a>>b>>c>>d>>e;
    while(a!=-1)
    {
       nb=b+c-d;
       if(nb>e)
       {
           cout<<"Enter account number (or -1 to quit): "<<a<<"\n";
           cout<<"Enter beginning balance: "<<fixed<<setprecision(2)<<b<<"\n";
           cout<<"Enter total charges: "<<fixed<<setprecision(2)<<c<<"\n";
           cout<<"Enter total credits: "<<fixed<<setprecision(2)<<d<<"\n";
           cout<<"Enter credit limit: "<<fixed<<setprecision(2)<<e<<"\n";
           cout<<"New balance is "<<fixed<<setprecision(2)<<nb<<"\n";
           cout<<"Account:      "<<a<<"\n";
           cout<<"Credit limit: "<<fixed<<setprecision(2)<<e<<"\n";
           cout<<"Balance:      "<<fixed<<setprecision(2)<<nb<<"\n";
           cout<<"Credit Limit Exceeded.\n";
       }
       else
       {
          cout<<"Enter account number (or -1 to quit): "<<a<<"\n";
          cout<<"Enter beginning balance: "<<fixed<<setprecision(2)<<b<<"\n";
          cout<<"Enter total charges: "<<fixed<<setprecision(2)<<c<<"\n";
          cout<<"Enter total credits: "<<fixed<<setprecision(2)<<d<<"\n";
          cout<<"Enter credit limit: "<<fixed<<setprecision(2)<<e<<"\n";
          cout<<"New balance is "<<fixed<<setprecision(2)<<nb<<"\n";
       }
       cin>>a>>b>>c>>d>>e;
    }
    cout<<"Enter Account Number (or -1 to quit): -1"<<endl;
    return 0;
}
