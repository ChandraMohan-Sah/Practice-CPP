#include<iostream>
using namespace std;


/*-------------------Iterator Approach---------------------*/
bool CheckSorted(int *arr, int n, int index = 0){

    // Base Case: If the array is empty or we've printed all elements
    if (n == 0 || index == n-1) { //elements are up to 0 to (n-1) ; n means we finished all elements 
        return 1;
    }

    //Recursive Case
    if(arr[index]< arr[index+1]){
        return CheckSorted(arr, n, index+1);
    }else{
        return 0;
    }
}   


/*-------------------His Approach---------------------*/
bool isSorted(int *a, int n){
    //base Case
    if(n==0 || n==1){ //Check Number of elements in array
        return true;
    }


    //recursive case
    bool isSmallerarraySorted = isSorted(a+1, n-1);
    if(isSmallerarraySorted && a[0] < a[1]){
        return true;
    }else{
        return false;
    }
}


int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    bool ans1 = CheckSorted(arr,n);
    bool ans2 = isSorted(arr,n);

    if ((ans1 && ans2) == true){ //combining both function (mine and his : Double check ..Hahahaha.. But not compulsory)
        cout<<"Sorted Array:";
    }
    else{
        cout<<"Not Sorted Array";
    }

    return 0;
}
