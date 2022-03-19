
/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 8th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 判断一个数是奇数还是偶数并输出结果
 */


#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    b=a%2;
    if(b==0)
    {
        cout<<a<<"是偶数";
    }
    else cout<<a<<"是奇数";
    return 0;
}
