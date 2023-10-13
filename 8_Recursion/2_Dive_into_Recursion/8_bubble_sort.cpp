#include<iostream>
using namespace std;


void BubbleSort_Using_Recursion(int *arr,int n, int i=0){
    //base case
    if(i == n)
        return ;

    //recursive case
    for(int j=0; j<=n-2; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    BubbleSort_Using_Recursion(arr, n, i+1);
}


int main()
{
    int arr[] = {12,4,16,23,56,3,21,34, 29};
    int n = sizeof(arr)/sizeof(int);

    // for(int i=0; i<=n-2; i++){ //kati patak inner loop chalnu paryo

    // }
    BubbleSort_Using_Recursion(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}