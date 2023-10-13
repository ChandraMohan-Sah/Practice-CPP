#include<iostream>
using namespace std;

void AllOccurance(int *arr, int n, int key, int index =0){
    //Base Case
    if(index == n){
        return; //to the function that called it
    }

    //Rrecursive Case
    if(arr[index] == key){
        cout<<index<<" "; //U can store output even in an array as per our requirement
    }
    return AllOccurance(arr, n, key, index+1); //to the function that called it
}


int main()
{
    int arr[] = {1,1,6,3,4,1,3,7};
    int n = sizeof(arr) / sizeof(int);
    AllOccurance(arr, n, 1);
    return 0;
}
