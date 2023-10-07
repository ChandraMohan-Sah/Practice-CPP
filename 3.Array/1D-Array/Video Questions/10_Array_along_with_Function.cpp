#include<iostream>
using namespace std;

void PrintArray(int a[], int n){

    for(int i=0; i<n; i++){
        cout<<a[i]<<"  ";
    }
}


int main()
{
    int arr[] = {12, -3, 45, 89, 23, 90};
    int n = sizeof(arr)/sizeof(int);

    // Using function Print all array elements
    PrintArray(arr, n);
    return 0;
}