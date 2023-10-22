#include<iostream>
using namespace std;

int GCD(int divident,int divisor)   
{   //base case
	if(divisor==0)
		return divident;

    //recursive
	return GCD(divisor, divident%divisor);
}



int main()
{
    int num1 =18;
    int num2 =10;
    int ans = GCD(num1, num2);
    cout<<ans;
    return 0;
}





