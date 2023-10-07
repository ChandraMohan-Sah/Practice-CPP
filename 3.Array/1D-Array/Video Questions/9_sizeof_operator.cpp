#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10, 23, 3, 45, 67};

    int n = sizeof(arr)/sizeof(int);
    cout<<"Number of integer bucket in arr is "<<n<<" ";
    
    return 0;
}