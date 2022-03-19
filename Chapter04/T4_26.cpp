
/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 16th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Check whether it is palindrome number
 */


#include <iostream>

using namespace std;

int main()
{
    char a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a==e&&b==d)
        cout<<"是回文数"<<endl;
    else cout<<"不是回文数"<<endl;
    return 0;
}
