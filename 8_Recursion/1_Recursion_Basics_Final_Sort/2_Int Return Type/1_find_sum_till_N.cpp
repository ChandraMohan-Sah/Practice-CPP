#include<iostream>
using namespace std;

int SUM(int n){
    //base case
    if(n == 1){
        return 1;
    }

    //recursive case 
    return n+SUM(n-1);

}


int main()
{
    int n=5;
    int ans = SUM(n);
    cout<<ans<<" ";
    return 0;
}