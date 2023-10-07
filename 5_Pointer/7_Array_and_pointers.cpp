/*
    1. See Screensorts

    2. Relation between 1D-array and Pointers

    3. Understand how to pass an array to function using pointers.

*/

#include<iostream>
using namespace std;

void PrintArray(int *a, int n){
    cout<<"Inside Function"<<endl;
    for(int i=0; i<4; i++){
        cout<< *(a+1) <<" ";
    }
}

int main()
{
    int a[] = {1,2,3,4};

    for(int i=0; i<4; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    PrintArray(a, 4);

    return 0;
}