/*  
    SUMMARY

    1.Size of each pointer variable is same as it stores the address only
        4 Byte for 32-bit Computer
        8 Byte for 64-bit Computer
 
*/

#include<iostream>
using namespace std;

int main()
{
    
    int a =10;
    int *ptr1;
    ptr1 = &a;

    float b =10.45;
    float *ptr2;
    ptr2 = &b;

    double c =10123.45;
    double *ptr3;
    ptr3 = &c;

    string s = "Hello World";
    string *ptr4;
    ptr4 = &s;

    cout<<"This computer has 64 bit architecture."<<endl;
    cout<< sizeof(ptr1)<<" Byte"<<endl;
    cout<< sizeof(ptr2)<<" Byte"<<endl;
    cout<< sizeof(ptr3)<<" Byte"<<endl;
    cout<< sizeof(ptr4)<<" Byte"<<endl;

    return 0;
}