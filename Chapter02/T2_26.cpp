
/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 8th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: ���ͼ��
 */


#include <iostream>

using namespace std;

int main()
{
    //��һ�ַ���
    cout<<"first begin \n"<<endl;
    cout<<" * * * * * * * * \n"<<endl;
    cout<<"  * * * * * * * *\n"<<endl;
    cout<<" * * * * * * * * \n"<<endl;
    cout<<"  * * * * * * * *\n"<<endl;
    cout<<" * * * * * * * * \n"<<endl;
    cout<<"  * * * * * * * *\n"<<endl;
    cout<<" * * * * * * * * \n"<<endl;
    cout<<"  * * * * * * * *\n"<<endl;
    cout<<"end \n"<<endl;


    //�ڶ��ַ���
    cout<<"second begin \n"<<endl;
    int i;
    for(i=1;i<9;i++)
    {
        if(i%2!=0)
        {
            cout<<" * * * * * * * * \n"<<endl;
        }
        else
        {
            cout<<"  * * * * * * * *\n"<<endl;
        }
    }
    cout<<"end "<<endl;
    return 0;
}
