/*
    For Decreasing Number :
    (like for N=6 )
        5 4 3 2 1

*/


#include<iostream>
using namespace std;


void DecreasingSequence(int n){
    //Base Case
    if(n == 0){
        return;
    }

    //Recursive Case
    cout<<n<<" ";
    //cout<<DecreasingSequence(n-1)<<endl; shows error why ?? --How can a function be output, A function can be called or returned
    //return DecreasingSequence(n-1); --> This also works
    DecreasingSequence(n-1);
}


void IncreasingSequence(int n){
    //Base Case
    if(n == 0){
        return;
    }

    //Recursive Case
    IncreasingSequence(n-1); //slight Difference
    cout<<n<<" ";
}


int main()
{
    int n;cin>>n;
    cout<<"Decreasing Sequence : ";
    DecreasingSequence(n);

    cout<<"Increasing Sequence : ";
    IncreasingSequence(n);
    return 0;
}