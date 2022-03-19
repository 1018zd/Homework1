
/*
 * FileName: T4_29.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Infinite loop the time of  the number 2
 */


#include <iostream>

using namespace std;

int main()
{
    int m=1;
    int i=1;
    while(true)
    {
        m=i*2;
        cout<<m<<endl;
        i=m;
    }
    return 0;
}
