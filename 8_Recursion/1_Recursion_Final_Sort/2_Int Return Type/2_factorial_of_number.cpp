#include<iostream>
using namespace std;

int Fact(int n){
    //base case
    if(n==1){
        return 1;
    }

    //recursive case
    return n*Fact(n-1);
}


int main()
{
    int n=4;
    int ans = Fact(4);
    cout<<ans<<" ";
    return 0;
}