


/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 8th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: ���������������һ�����Ƿ�Ϊ�ڶ������ı�����
 */

#include <iostream>

using namespace std;

int main()
{
    int n1,n2,m;
    cin>>n1>>n2;
    m=n1%n2;
    if(m!=0)
    {
        cout<<"��һ�������ǵڶ������ı�����"<<endl;
    }
    else
    {
        cout<<"��һ�����ǵڶ������ı�����"<<endl;
    }
    return 0;
}
