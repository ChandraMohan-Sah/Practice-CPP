#include<iostream>
using namespace std;

int main()
{
    //post increment
    int a =1;
    a++;
    int b = a++;
    cout <<"Value of a : "<<a<<endl;
    cout <<"Value of b : "<<b<<endl;



    //pre increment
    int p=1;
    p++;
    int q = ++p;
    cout <<"Value of p : "<<p<<endl;
    cout <<"Value of q : "<<q<<endl;

    return 0;
}