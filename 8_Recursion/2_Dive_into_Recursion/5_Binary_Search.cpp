#include<iostream>
#include<algorithm>
using namespace std;

int BinarySearch(int *arr,int start, int end, int key){

    //Base Case
    if(start > end)
        return -1;
    
    //Recursive Case
    int mid = (start + end)/2;

    if(arr[mid] == key){
        return mid;

    }else if (arr[mid] > key){
        return  BinarySearch(arr, start, mid-1, key);

    }else{
        return  BinarySearch(arr, mid+1, end, key);
    }
}


int main()
{
    int arr[] = {2,13,45,23,56,123,19,65};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int key = 45;
    int ans = BinarySearch(arr, 0, n-1, key);
    cout<<"Key Found at index : "<<ans;
    return 0;
}