/*
    Provided Elements are sorted    { 1, 4, 5, 6 , 8, 10 }
    sum = 11

    Two Pointer Approach : applied only on sorted array
    i = first index ( 0 )
    j = last index  (n-1)
 
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[] ={1, 4, 5,6,8,10};
    int n = sizeof(arr)/sizeof(int);
    int i=0, j=n-1;

    int sum =11;
    while(i<j){
        if(arr[i] + arr[j] == sum){
            cout<<arr[i]<<"  "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if ( arr[i] + arr[j] < sum){
            i++;
        }
        else{
            j--;
        }
    }

    return 0;
}

