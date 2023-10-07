#include<iostream>
using namespace std;

int main()
{
    int a,b;
    
    //bitwise and operator
    cout<< (7&5) <<endl; 
    cout<< (8&5) <<endl;

    //bitwise or operator
    cout<< (7|5) <<endl;
    cout<< (14|2) <<endl;

    //bitwise XOR operator
    cout<<(7^5) <<endl;
    cout << (14^1) <<endl;

    //bitwise left shift operator
    a=4;
    b=2;
    cout<<"Left Shift OPerator "<<(a<<b) <<endl;

    //bitwise right shift operator
    a=8;
    b=2;
    cout<<"Right shift Operator "<<(a>>b) <<endl;


    return 0;
}