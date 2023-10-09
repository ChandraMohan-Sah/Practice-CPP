#include<iostream>
using namespace std;

int main()
{   
    cout<<"Enter number of elements to be entered : "<<endl;
    // Request block of memory of size n
    int n;
    cin>>n;

    int *arr = new int[n]; // DMA for array integer of size n
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }    
    cout<<endl<<endl;



    int key;
    bool flag = 0;
    cout<<"Enter key to be searched :";
    cin>>key;

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            flag =1;
            cout<<"Key found at "<<i<<" index."<<endl<<endl;
            break;
        }
    }

    if(flag == 0){
        cout<<"Key not found.";
    }
    
    delete[] arr;// Release the allocated memory

    
    return 0;
}