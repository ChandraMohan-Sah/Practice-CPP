#include<iostream>
#include<climits>
using namespace std;

int main()
{
    cout<<"Enter number of elements to be entered : "<<endl;
    int n;
    cin>>n;

    int *arr = new int[n]; 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int largest = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"Largest Element is : "<<largest<<endl;

    return 0;
}

