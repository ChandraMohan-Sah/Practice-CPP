/*
    1. Sorted array is  mandatory.

    2. Returns boolean value true  (if key found)

    3. Returns boolean value false (if key not found)
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {10, 34, 26, 67, 89};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    bool present = binary_search(arr, arr+n, key);
    if(present == true){
        cout<<"Key Found. "<<endl;
    }else{
        cout<<"Key not Found. "<<endl;
    }
    return 0;
}