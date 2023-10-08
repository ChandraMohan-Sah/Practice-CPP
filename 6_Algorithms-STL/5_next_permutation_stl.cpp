#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(int);
    do{
        for(int i =0; i<n; i++){ // To print 1 2 3  at beginning.
            cout<< arr[i] << " ";
        }
        cout<<endl;

    }   while (next_permutation(arr, arr+n)); 
    return 0;
}

/* 
    Output

    1 2 3 
    1 3 2  
    2 1 3 
    2 3 1 
    3 1 2 
    3 2 1 

You  Observe that if typecasting is done from int to string : lexiographical sort is done .
 
    1 2 3  >  1 3 2 >  2 1 3  .....
*/