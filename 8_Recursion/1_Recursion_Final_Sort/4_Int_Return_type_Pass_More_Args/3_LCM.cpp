/*
    ALGORITHM
    +-----------------------------------------+
    a*b = LCM(num1, num2) * GCD(num1, num2);
    
    LCM(num1, num2) = (a*b) / GCD(num1, num2);

*/

#include<iostream>
using namespace std;

int GCD(int divident,int divisor)   
{   //base case
	if(divisor==0)
		return divident;

    //recursive
	return GCD(divisor, divident%divisor);
}


int LCM(int num1 , int num2){
    return (num1*num2)/GCD(num1, num2);
}


int main()
{
    int num1 =18;
    int num2 =10;
    int ans = LCM(num1, num2);
    cout<<ans;
    return 0;
}





