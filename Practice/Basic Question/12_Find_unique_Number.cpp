//Find Unique Number in 2*n+1 numberes where n number is repeated twice.

#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    int ans =0;

    while(num>0){
        int num_for_xor_operation ;
        cin >>num_for_xor_operation;

        ans = ans ^ num_for_xor_operation;
        num--;
    }

    cout<<"Unique Number is : "<<ans;
    return 0;
}