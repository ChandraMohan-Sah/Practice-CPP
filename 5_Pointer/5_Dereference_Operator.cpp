/*
    Refer to copy.

*/

#include<iostream>
using namespace std;

int main()
{
    int a =10;
    int *y;
    y = &a;

    cout<< y <<endl;
    cout<< &a <<endl;
    cout<< *y <<endl;
    cout<< a <<endl;   

    cout<< *(&a) <<endl;
    return 0;
}