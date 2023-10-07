#include<iostream>
using namespace std;

int main()
{
    int a = 1;

    cout<<"Post increment : "<<(a++)<<endl; //use then increase .. We used value as a=1 which is printed ...later a is increased to 2

    cout<<"Pre increment : "<< (++a)<<endl; 

    int c = 2;
    int d = c++;
    cout<<d<<endl;

    int f = 10;
    int e = ++f;
    cout<<e<<endl;


    return 0;
}