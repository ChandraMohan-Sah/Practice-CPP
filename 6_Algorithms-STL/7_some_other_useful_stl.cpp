/*  SUMMARY

    1. rotate(3-args);
    2. reverse(2-args);
    3. swap(2-args);
    4. min(2-args);
    5. max(2-args);

*/


#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<< *(arr+i) <<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {2, 45, -3, 56, 89, 345};
    int n = sizeof(arr)/sizeof(int);

    /*rotate() function for array */
    printArray(arr,n);
    //syntax : rotate(starting_index, rotate_left_over_3rd_index , ending_index);
    cout<<endl<<"After Rotate by 3rd index to left  : ";
    rotate(arr, arr+3, arr+n);
    printArray(arr,n);

    /* reverse(arg1, arg2) function for array*/
    reverse(arr,arr+n);
    cout<<endl<<"After Reverse : ";
    printArray(arr,n);

    /* swap(arg1, arg2) */
    int a =10, b = 20;
    cout<<endl<<"Before swap : ";
    cout<<a<<" "<<b<<" "<<endl;
    cout<<endl<<"After swap : ";
    swap(a,b);
    cout<<a<<" "<<b<<" "<<endl;

    /*min(arg1, arg2)   max(arg1,arg2)*/
    int c = 30;
    cout<<"Minimum : "<< min(a,b)<<endl;
    cout<<"Maximum : "<<max(a, max(a,b))<<endl;


    return 0;
}