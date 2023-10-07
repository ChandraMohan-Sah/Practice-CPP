#include<iostream>
using namespace std;

void BubbleSort(int *arr, int n){

    for(int i=0; i <=n-2; i++){
        for(int j=0; j<=n-2; j++){
            // if( arr[j]> arr[j+1]){
            //     swap(arr[j], arr[j+1]);
            // }

            // arr[j] == *(arr + j)
            // arr[j+1] == *(arr + j +1)
            if(*(arr+j) > *(arr+j+1)){
                swap(*(arr+j), *(arr+j+1));
            }
        }
    }

}

void PrintArray(int *arr, int n){

    for(int i=0; i<n ;i++){
        cout<< *(arr+i) <<"  ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {16, 7, 3, 90, -45};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Before Sorting : "<<endl;
    PrintArray(arr, n);

    BubbleSort(arr, n); /* arr gives address of 1st element of array. Can Use (&arr) as well. */

    cout<<"After Sorting : "<<endl;
    PrintArray(arr, n);

    return 0;
}