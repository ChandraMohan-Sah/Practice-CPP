#include<iostream>
using namespace std;


/*--------------------My Approach---------------------*/

bool CheckSorted(int *arr, int n, int index = 0){
    // Base Case: If we've reached the end of the array, it's sorted
    
    if(n == 0){  //No elements means element are already sorted
        return true;
    }

    if (index == n - 1) {
        cout<<arr[index]; //print last element as well 
        return true;
    }
    
    //Output to be printed 
    cout<<arr[index]<<" ";

    //Recursive Case
    if(arr[index]<= arr[index+1]){
        return CheckSorted(arr, n, index+1);
    }else{
        return 0;
    }
}   


int main()
{
    int arr[] = {12, 34, 56, 78, 98};
    int n = sizeof(arr)/sizeof(int);

    bool ans1 = CheckSorted(arr,n);

    if ((ans1) == true){ 
        cout<<endl<<"Sorted Array:";
    }
    else{
        cout<<endl<<"Not Sorted Array";
    }

    return 0;
}