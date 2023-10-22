#include<iostream>
using namespace std;


int LastOccurance(int *arr, int n, int key, int index=0){
    //Base case
    if(index == n)
        return -1;

    //Recursive Case
    
    //if key found then search next occurance
    if(arr[index] == key){  
        int bigger_index = LastOccurance(arr, n, key, index +1);
        if(bigger_index != -1){
            return bigger_index;
        }
        return index;
    }

    //key not found then
    int j = LastOccurance(arr, n, key, index+1);
    return j;
}

int main()
{
    int arr[] = {1,1,6,3,4,3,3,7};
    int n = sizeof(arr) / sizeof(int);
    int ans1 = LastOccurance(arr, n, 3);
    cout<<ans1<<endl;

    return 0;
}