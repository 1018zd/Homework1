
/*
 * FileName: T4_28.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 17th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Print an asterisk checkerboard pattern
 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1;j++)
        {
            if(i%2==0&&j==1)cout<<" ";
            if(i%2!=0&&j!=n+1)cout<<"* ";
            if(i%2==0&&j!=1)cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
