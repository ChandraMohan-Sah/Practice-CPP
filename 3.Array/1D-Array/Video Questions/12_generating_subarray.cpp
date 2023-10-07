#include<iostream>
using namespace std;

void Generating_Subarray(int arr[], int n){

    for(int i=0; i<n; i++){             // loop for Starting point
        for(int j = i; j<n; j++){       //loop for ending point
            for(int k=i; k<=j; k++ ){   /* k=i (starting point) k<=(Ending Point) ; Print element between i and j i.e subarray*/
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }   
}



int main()
{
    int arr[]={10, 23, 45, 67, 89};
    int n = sizeof(arr)/sizeof(int);

    Generating_Subarray(arr, n);
    return 0;
}