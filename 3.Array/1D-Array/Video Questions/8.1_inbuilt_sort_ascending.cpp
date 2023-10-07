#include<iostream>
#include<algorithm> // for sort function
using namespace std;

int main()
{
    int arr[] = {12,34, -2, 89, 35};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Before Sorting : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    /* for Ascending Order Sorting  */
    sort(arr, arr+n);
    cout<<"After Sorting : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    
    return 0;
}