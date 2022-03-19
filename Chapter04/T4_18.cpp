/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: print form
 */

#include <iostream>

using namespace std;

int main()
{
    int i=1;
    int N;
    cout<<"N\t"<<"10*N\t"<<"100*N\t"<<"1000*N\n"<<endl;
    while(i<=5)
    {
        N=i;
        cout<<N<<"\t"<<10*N<<"\t"<<100*N<<"\t"<<1000*N<<endl;
        i++;
    }
    return 0;
}
