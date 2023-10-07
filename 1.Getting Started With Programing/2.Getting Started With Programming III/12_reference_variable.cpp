#include<iostream>
using namespace std;

int main()
{
    int a = 15;
    int &b = a;
    int &c = b;

    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of b : "<<b<<endl;
    cout<<"Value of c : "<<c<<endl<<endl;

    c++;
    cout<<"After increment in any one of reference variable. Whole ans changes"<<endl;

    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of b : "<<b<<endl;
    cout<<"Value of c : "<<c<<endl<<endl;

    return 0;
}