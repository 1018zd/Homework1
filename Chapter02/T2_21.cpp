
/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 5th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 输出图形
 */

#include <iostream>

using namespace std;

int main()
{
    int i;
    //矩形
    cout<<" rectangular \n";
    for(i=1;i<=9;i++)
    {
        if(i==1||i==9)cout<<"*********\n"<<endl;
        else cout<<"*       *\n"<<endl;
    }

    //椭圆
    cout<<" ellipse \n";
    for(i=1;i<=9;i++)
    {
        if(i==1||i==9)cout<<"   ***   \n"<<endl;
        else if(i==2||i==8)cout<<" *     * \n"<<endl;
        else cout<<"*       *\n"<<endl;
    }

    //箭头
    cout<<" arrow \n";
    for(i=1;i<=9;i++)
    {
       if(i==2)cout<<"   ***   \n"<<endl;
       else if(i==3)cout<<"  *****  \n"<<endl;
       else cout<<"    *    \n"<<endl;
    }

    //菱形
    cout<<" rhombus \n";
    for(i=1;i<=9;i++)
    {
        if(i==1||i==9)cout<<"    *    \n"<<endl;
        if(i==2||i==8)cout<<"   * *   \n"<<endl;
        if(i==3||i==7)cout<<"  *   *  \n"<<endl;
        if(i==4||i==6)cout<<" *     * \n"<<endl;
        if(i==5)cout<<"*       *\n"<<endl;
    }

    return 0;
}
