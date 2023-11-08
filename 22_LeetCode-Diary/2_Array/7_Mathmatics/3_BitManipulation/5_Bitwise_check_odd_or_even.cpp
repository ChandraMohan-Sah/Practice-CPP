/* 
SUMMARY

1.Check Odd or Even:
        Lets observe:
            1 = 0001
            2 = 0010
            3 = 0011
            4 = 0100

        Odd Number has L.S.B = 1
        Even Number ha L.S.B = 0   

    Process:
    number: 0010 (lets say 2)
    mask  : 0001 (always 1)
    int ans1 = (number & mask ) = 0000 

    if (0) == Even
    if (1) == Odd

*/


#include<iostream>
using namespace std;
 
bool CheckOddOrEven(int n){
    if (n ==1){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int n;
    cin>>n;
    
    bool ans1 = CheckOddOrEven(n&1);
    if(ans1){
        cout<<n<<" is Odd."<<endl;
    }else{
        cout<<n<<" is Even."<<endl;
    }
    
    return 0;
}
