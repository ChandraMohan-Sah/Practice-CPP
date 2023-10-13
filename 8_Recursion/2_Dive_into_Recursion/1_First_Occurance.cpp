#include<iostream>
using namespace std;

int FirstOccurance(int *arr, int n, int key){
    //base case
    if(n == 0){
        return -1;
    }

    /*  Breaking down into smaller arrays
    
    index  : 0          1   2   3   4   5   6   7
            ----     -----------------------------
            | 1 |     | 1 | 6 | 3 | 4 | 3 | 3 | 7 |
            ----     ------------------------------

    */
 
    //recursive case  
    if(arr[0] == key){ 
        return 0;
    }

    //Leaving first element check the smaller array
    int i = FirstOccurance(arr+1, n-1, key); //store index : if found
    if(i == -1){ //check
        return -1;
    }
    return i+1;
}


int FirstOccuranceUsingIterator(int *arr, int n, int key, int index=0 ){
    //Base Case
    if(index == n)
        return -1;
    
    //recursive case
    if (arr[index] == key){
        return index;
    }
    
    return FirstOccuranceUsingIterator(arr, n, key, index+1);
}

int main()
{
    int arr[] = {1,1,6,3,4,3,3,7};
    int n = sizeof(arr) / sizeof(int);
    int ans1 = FirstOccurance(arr, n, 3);
    cout<<ans1<<endl;

    int ans2 = FirstOccuranceUsingIterator(arr, n, 3);
    cout<<ans2;

    return 0;
}

