
/*
 * FileName: T4_19.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 17th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print the two largest numbers out of ten
 */


#include <iostream>

using namespace std;

int main()
{
    int i=1,number1,number2,number,max1,max2;
    cin>>number1>>number2;
    if(number1>number2) {max1=number1;max2=number2;}//将number1和number2中较大的数赋值给max1,较小的数赋值给max2
    else {max1=number2;max2=number1;}
    while(i<=8)
    {
        cin>>number;
        if(max1<number){max2=max1;max1=number;}
        else if(max2<number){max1=max1;max2=number;}
        else if(max2>number){max1=max1;max2=max2;}
        i++;
    }
    cout<<"max1="<<max1<<"\n";
    cout<<"max2="<<max2<<endl;
    return 0;
}
