
/*
 * FileName: T4_25.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print  hollow square
 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)//控制行数
       {
           for(int j=0;j<n;j++)//控制列数
           {
               if(i==0||i==n-1||j==0||j==n-1)cout<<"*";
               else cout<<" ";
           }
            cout<<endl;
       }
    }
    return 0;
}
