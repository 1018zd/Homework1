
/*
 * FileName: T4_15.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Calculate and display revenue
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double s,S;
    cin>>s;
    while(s!=-1)
    {
        S=200.00+s*0.09;
        cout<<"Enter sales in dollars (-1 to end): "<<fixed<<setprecision(2)<<s<<"\n";
        cout<<"Salary is: $"<<fixed<<setprecision(2)<<S<<"\n";
        cin>>s;
    }
    cout<<"Enter sales in dollars (-1 to end): -1"<<endl;
    return 0;
}
