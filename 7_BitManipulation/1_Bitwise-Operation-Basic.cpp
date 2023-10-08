/*
    See Getting started notecopy
*/

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

    //bitwise XOR operator -->Odd Ones Detector
    cout<<(7^5) <<endl;
    cout << (14^1) <<endl;

    return 0;
}