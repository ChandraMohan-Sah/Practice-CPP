/*
    1. Sorted array is  mandatory.

    2. lower_bound  stores address of element  just greater than or equal to key. //    >=key 

    3. upper_bound stores address of element just greater than key. //  >key 

    4. subtracting address of upper-lower gives (index which is equivalent to  frequency)

*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] ={10, 20, 30, 40, 40, 40, 50, 60, 100};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    int *lower = lower_bound(arr, arr+n, key); //>=key (stores address of element  just greater than or equal to key )
    int *upper = upper_bound(arr, arr+n, key); // >key (stores address of element just greater than key )
    int freq = upper - lower; //subtracting address gives index == frequency of element
    cout<<"Frequency of Key "<<key<<" is : "<<freq<<endl;

    if (freq >0){
        //Lower Bound Understanding
        cout<<"Value : "<< *lower <<endl;
        cout<<"First occurance of "<<key<<" at index : "<<lower-arr<<endl;

        //Upper Bound Understanding
        cout<<"Value : "<< *upper <<endl; //stores value > key
        cout<<"Last occurance of "<<key<<" at index : "<<upper-arr -1 <<endl; // address : 120 -1 ==>116 ; since int size is 4 byte
    }else{
        cout<<"Key not found."<<endl;
    }


    return 0;
}