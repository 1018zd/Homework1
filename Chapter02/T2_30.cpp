
/*
 * FileName: main.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 计算并显示出用户的BMI以及有关标准信息
 */

#include <iostream>

using namespace std;

int main()
{
    int w,h,BMI;//w表示体重，h表示身高
    cin>>w>>h;
    BMI=(703*w)/(h*h);
    cout<<"BMI="<<BMI<<"\n"<<endl;
    cout<<"BMI VALUSE\n"<<endl;
    cout<<"Underweight: less than 18.5 \n"<<endl;
    cout<<"Normal:      between 18.5 and 24.9 \n"<<endl;
    cout<<"Overweight:  between 25 and 29.9 \n"<<endl;
    cout<<"Obese:       30 or greater \n"<<endl;
    return 0;
}
