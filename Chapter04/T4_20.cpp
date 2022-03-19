
/*
 * FileName: T4_20.cpp
 * Author:   Dong Zhang
 * E-mail:   2263520250@qq.com
 * Date:     Mar 17th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Verify the validity of user input
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    cout << "Enter result (1 = pass,2 = fail): ";
    int result;
    cin>>result;
    if(result!=1&&result!=2)
    {while( result!=1&&result!=2)
    {
        cout << "Enter result (1 = pass,2 = fail): ";
        cin >> result;
    }
    }
    if ( result == 1)
            passes = passes + 1;
    if(result ==2)
            failures =failures+1;
    cout<<"Passed "<<passes<<"\nFailed"<<failures<<endl;
    return 0;
}
