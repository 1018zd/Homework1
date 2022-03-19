
/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 14th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: print the largest number
 */

#include <iostream>

using namespace std;

int main()
{
    int counter=1;
    int number;
    int largest;
    cin>>number;
    largest=number;
    while(counter<=9)
    {
        cin>>number;
        if(number>largest) {largest=number;}
        else {largest=largest;}
        counter=counter+1;
    }
    cout<<"The largest is :"<<largest<<endl;
    return 0;
}
