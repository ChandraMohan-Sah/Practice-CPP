/*  
    SUMMARY

    1.Address of int, float, double , string can be accessed using (&variable) operator.

    2.Starting address of integer array can be accessed from its name : cout<<arr<<endl;

    3.Starting address of string array can be accessed from its name : cout<<s<<endl;

    4.Twist in accesseing : 

        1) address of single character.

        2) starting address of character array.
*/


#include<iostream>
#include<string>
using namespace std;

int main()
{   
    /*Accessing address of Basic Data Type */
    int a =10;
    float b = 10.4;
    double c = 34.56;
    string str = "Hello";

    cout<<(&a)<<endl;
    cout<<(&b)<<endl;
    cout<<(&c)<<endl; 
    cout<<(&str)<<endl;

    //In case of Integer Arrays
    int arr[] = {10,20,30,40};
    cout<<arr<<endl;

    //In case of Array of String
    string s[] = {"Chandra", "Mohan", "Sah"};
    cout<<s<<endl;



    /*Cannot access address of character in either Way. */
    char d = 'A'; 
    cout<<d<<"  ";cout<<(&d); 


    /*Cannot access address of character array  in either Way. */
    char ch[] = {'A','B','C','\0'};
    cout<<ch<<endl;


    return 0;
}
