#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;

    while(n>0){
        int rem = n%10;
        sum += rem;
        n /=10;
    }

    cout<<"Sum of Digit is "<<sum<<endl;
    return 0;
}