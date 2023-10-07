/*
    SUMMARY

    1. Use * opearator to create int, char, float, double, string pointer.
 
*/


#include<iostream>
#include<string>
using namespace std;

int main()
{   
    int a =10;
    int *ptr1;
    ptr1 = &a;
    cout<<ptr1<<endl;

    float b =10.45;
    float *ptr2;
    ptr2 = &b;
    cout<<ptr2<<endl;

    double c =10123.45;
    double *ptr3;
    ptr3 = &c;
    cout<<ptr3<<endl;

    string s = "Hello World";
    string *ptr5;
    ptr5 = &s;
    cout<<ptr5<<endl;

    /* Cannot store address of characters */
    char d = 'A';
    char *ptr4;
    ptr4 = &d;
    cout<<ptr4<<endl;



    
    return 0;
}