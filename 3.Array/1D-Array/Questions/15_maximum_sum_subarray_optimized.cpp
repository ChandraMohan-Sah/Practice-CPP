//Use Hashing Techneque : Pre-computation and Pre-Computation Fetch

#include<iostream>
#include<climits>
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

//precomputation --->Here, commulative sum is stored in array csum[]
int csum[20];
void cumulative_sum_of_array_element(int arr[], int n){
    int sum =0;

    int  i=0;
    for(int j=i; j<n; j++){
        sum = sum + arr[j];
        csum[j]= sum;   //holds consecutive sum in carr[]
        i++;
    }

    for(int i=0; i<n; i++){
         cout<<csum[i]<<" ";
    }
    cout<<endl;
}

void MaximumSumSubarray(int arr[], int n){
    int max = INT_MIN;
    int starting_index;
    int ending_index;

    for(int i=0; i<n; i++){           // loop for Starting point
        for(int j = i; j<n; j++){     //loop for ending point   
            int sum =0;

            sum = csum[j] - csum[i-1]; //pre-computation fetch

            if(sum > max){           // checking 
                max = sum;
                starting_index=i;  // Storing indexes having largest sum
                ending_index=j;
            }
            //cout<<sum<<endl;
        }
        cout<<endl;
    }
    //printing subarray with maximum value
    cout<<"MaximumSum subarray Elements are ";
    for(int k=starting_index; k<=ending_index; k++ ){      
        cout<<arr[k]<<"  ";
    }
    cout<<endl;
    cout<<"Maximum Sum = "<<max<<endl<<endl;

}


int main()
{
    int arr[]={10, 23, 45, 67, 89};
    int n = sizeof(arr)/sizeof(int);

    Generating_Subarray(arr, n);
    cumulative_sum_of_array_element(arr,n);
    MaximumSumSubarray(arr,n);
    return 0;
}