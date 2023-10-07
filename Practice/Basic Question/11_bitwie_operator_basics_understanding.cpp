/*
bitwise AND
bitwise OR
bitwise XOR

bitwise Right Shift
bitwise Left SHift

bitwise Not
*/

#include<iostream>
using namespace std;

int main()
{
    int a = 8;
    int b = 2;

    a = a& b;
    cout<<a<<endl;

    int c = 12, d = 3;
    c = c | d;
    cout<<c<<endl;

    int e = 8, f= 6;
    e = e ^ f;
    cout<<e<<endl;

    int g = 8, h= 2;
    g = g << h; //leftshift
    cout<<g<<endl;

    int i = 8, j= 2;
    i = i >> j; //Rightshift
    cout<<j;

    return 0;
}