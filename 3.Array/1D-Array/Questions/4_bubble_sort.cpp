/*
    1. See Screensorts

    2. swap(element1, element2)
*/


#include<iostream>
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

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }    
    cout<<endl<<endl;

    //--------------------logic--------------------------->

    for(int i=0; i<=n-2; i++){ //kati patak inner loop chalnu paryo
        for(int j = 0; j<=n-2; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout<<"After sorting :"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    delete[] arr;

    //--------------------------------------------------------->

    return 0;
}