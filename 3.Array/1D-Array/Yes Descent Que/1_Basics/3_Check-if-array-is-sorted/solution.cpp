/*
    Understand loop properly in both cases .
    Dry Run the code.
*/

#include<iostream>
using namespace std;

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        /*
        for (int i=1; i<n; i++){
            if(arr[i]>=arr[i-1]){
                continue;
            }
            else
                 return 0;
        }
        return 1;   OR
        */

        bool flag = true;
        //The loop condition is changed to i < n - 1 to prevent going out of bounds when you access arr[i+1].
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                flag = false;
                break;
            }
        }
        
        return flag;
    }
};



int main(){

    Solution obj;

    int arr[] = {3,4,5,1,2};
    int n = sizeof(arr)/sizeof(int);

    bool ans = obj.arraySortedOrNot(arr, n);

    if(1){
        cout<<"Sorted."<<" "<<endl;
    }else{
        cout<<"Not Sorted."<<" "<<endl;
    }

    return 0;
}



