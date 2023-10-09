/*--- Find minimum element in an unsorted array and swap with 1st element of unsorted array-----*/

#include<iostream>
using namespace std;

int main(){

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

    //------------------logic-------------------------------------
    
    cout<<"After Selection Sort : "<<endl;

    for(int i=0; i<=n-2; i++){ 
        for(int j=i+1; j<=n-1; j++){ //finding min element in unsorted array
            int min = i; /*---------------------> Holds index : of element having min value */
            if(arr[min] > arr[j]){
                swap(arr[j],arr[min]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }

    cout<<endl;

    delete[] arr;

    return 0;
    
}
