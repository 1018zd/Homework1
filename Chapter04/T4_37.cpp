/*
 * FileName: T4_37.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 19th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Study world population growth
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n0;
    cin>>n0;
    double n=n0,m;
    double x;
    cin>>x;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"|"<<setw(14)<<"��i��"<<setw(6)<<"|"<<setw(10)<<"Ԥ�������˿�(����)"<<"|"<<setw(12)<<"�����˿�������(����)"<<"|"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    for(int i=1;i<=75;i++)
    {
        n=n+n*x;m=n*x;
        cout<<"|"<<setw(12)<<"��"<<i<<"��"<<setw(6)<<"|"<<setw(12)<<n<<setw(6)<<"|"<<setw(12)<<m<<setw(6)<<"|"<<endl;
        cout<<"----------------------------------------------------------"<<endl;
    }
    return 0;
}
