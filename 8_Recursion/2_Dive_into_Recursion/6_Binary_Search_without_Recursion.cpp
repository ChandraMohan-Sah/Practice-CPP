#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {2,13,45,23,56,123,19,65};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,arr+n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int start =0, end = n-1;
    int key;cin>>key;

    bool flag = 0;
    int mid;
    while(start<=end){
        mid = (start + end)/2;

        if (key == arr[mid]){
            cout<<"Element found at index : "<<mid<<endl<<endl;
            flag =1;
        }
        if(arr[mid] > key){
            end = mid-1;
        }else{
            start = mid +1;
        }
    }

    if (flag ==0){
        cout<<"Element not found "<<endl;
    }

    return 0;    
}

