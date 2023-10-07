#include<iostream>
#include<algorithm> //for sort function
using namespace std;

int compare(int a, int b){
    return a>b; //for reversing or descending
    //return a<b; // for ascending
}


int main()
{
    int arr[] = {12, 4, 56, 90, -23};
    int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    sort(arr, arr+n, compare); 
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}


