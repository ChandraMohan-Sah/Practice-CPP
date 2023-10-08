/*  SUMMARY

    1. rotate(starting_index, rotate_about_x_index_to_left,  ending_index);
    2. reverse(starting_index, ending_index);
    3. sort(starting_index, ending_index)

    4. swap(1st_num, 2nd_num);
    5. min(1st_num, 2nd_num); min(a, min(b,c));
    6. max(1st_num, 2nd_num);
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

    /* sort(starting_index, ending_index) */
    cout<<"Before Sort : ";
    printArray(arr, n);

    cout<<"After Sort : ";
    sort(arr, arr+n);
    printArray(arr, n);

    return 0;
}