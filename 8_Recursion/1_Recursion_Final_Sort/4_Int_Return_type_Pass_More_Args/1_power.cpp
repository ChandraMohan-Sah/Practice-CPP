#include<iostream>
using namespace std;


int Power(int m, int e){
    //base case 
    if(e == 0)
        return 1;
    
    //recursive case
    return m * Power(m, e-1);
}


int main()
{
    int mantissa = 2;
    int exponent = 4;
    int ans = Power(mantissa, exponent);
    cout<<ans<<" "<<endl;
    return 0;
}