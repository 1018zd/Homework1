
/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 8th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 输出图形
 */


#include <iostream>

using namespace std;

int main()
{
    //第一种方法
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


    //第二种方法
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
