/*
    1. Sorted array is not mandatory

    2. Returns the address of key (if key found)

    3. Returns the address of last element (if key not  found)
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {2, 45, 23, 15, -1};
    int key;
    cin>>key;

    int n = sizeof(arr)/sizeof(int);

    int *ans =  find(arr, arr+n, key); //pointer variable toring address
    //cout<<ans;
    int index = ans - arr; //stores index of key .see copy
                // address1- address2 = index of key

    if(index == n){
        cout<<" Key is not Found"<<endl;
    }
    else{
        cout<<" Key is present at "<<index<<endl;
    }

    return 0;
}