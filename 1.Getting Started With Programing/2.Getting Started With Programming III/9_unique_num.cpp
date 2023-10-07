//for n=5 ; 13 14 13 14 4 ; unique number is 4 

#include<iostream>
using namespace std;

int main()
{
    int n; //How many numbers you want to take for xor operation ?
    cin>>n;

    int i=1;
    int num;

    int ans =0;
    while(i<=n){
        cin>>num;
        ans =(ans^num);
        i++;
    }

    cout<<"Unique number is : " <<ans<<endl;

    return 0;
}