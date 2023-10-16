#include<iostream>
using namespace std;

int power(int a,int n){
    //base case
    if(n==0)
        return 1;
    
    //recursive case
    int smallerans = power(a, n-1);
    int biggerans = a*smallerans;

    return biggerans; //Or Simply Do This Belows Ans
    // return a*power(a,n-1);
}


int main()
{
    int a = 2;
    int ans = power(a, 4);
    cout<<ans<<" ";
    return 0;
}
