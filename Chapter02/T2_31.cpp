
/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: ���ÿ�տ������ѵķ���
 */


#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,e,sum;
    cin>>a>>b>>c>>d>>e;
    sum=d+e+b*(a/c);
    cout<<"ÿ�쿪����Ӣ������"<<a<<"\n"<<endl;
    cout<<"ÿ�������͵ļ۸�"<<b<<"\n"<<endl;
    cout<<"ÿ�������Ϳ��Կ���ƽ��Ӣ������"<<c<<"\n"<<endl;
    cout<<"ÿ�յ�ͣ���ѣ�"<<d<<"\n"<<endl;
    cout<<"ÿ�յ�ͨ�зѣ�"<<e<<"\n"<<endl;
    cout<<"ÿ�տ������ѵķ��ã�"<<sum<<endl;
    return 0;
}
