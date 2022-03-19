
/*
 * FileName: T4_16.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double hour,salary,sum=0;
    cin>>hour;
    while(hour!=-1)
    {
        if(hour>40)
        {
            salary=400.00+15.00*(hour-40);
        }
        else salary=hour*10.00;
        sum=sum+salary;
        cout<<"Enter hours worked (-1 to end): "<<hour<<"\n";
        cout<<"Enter hourly rate of the employee ($00.00): 10.00\n";
        cout<<"Salary is $"<<fixed<<setprecision(2)<<salary<<"\n";
        cin>>hour;
    }
    cout<<"Enter hours worked (-1 to end): -1\n";
    cout<<"Total salary of employees last week: $"<<fixed<<setprecision(2)<<sum<<endl;
    return 0;
}
