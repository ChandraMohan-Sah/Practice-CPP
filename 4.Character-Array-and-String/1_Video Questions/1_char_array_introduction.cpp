#include<iostream>
using namespace std;

int main()
{
    /* Integer 1D array*/

    //int arr[10] = {100, 40, 24, 23}; //rest elements are 0
    int arr[] = {100, 40, 24, 23}; //See other initialization techniques as well

    // 1. We need loop to access each item in Integer array.
    int n = sizeof(arr)/sizeof(int);
    cout<<"Integer array Elements are : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<endl;



    /* Character 1D array*/

    //Initialization 
    char array1[8] = {'c','h','a','n','d','a','n','\0'}; // 1st Approach of Initializaion

    char b[10];  // 2nd Approach of Initializaion
    b[0] = 'A';
    b[1] = 'B';
    b[2] = '\0';

    // 3rd Approach of Initializaion
    char c[50] = "Welcome to My House"; //Double coutation initialization itself keeps NULL value at the end 


    /* 1.We can access through elements without loop.
        As array1 is pointer to 1st element and keeps 
        accessing memory unless encountered NULL.
    */
    cout<<"Character array Elements are : "<<endl;
    cout<<array1<<endl;
    cout<<b<<endl;


    return 0;
}