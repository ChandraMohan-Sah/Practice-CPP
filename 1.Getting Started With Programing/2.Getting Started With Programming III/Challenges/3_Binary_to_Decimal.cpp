/*
	Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

	Input Format
	Constraints
	0 < N <= 1000000000

	Output Format

	Sample Input
	101010

	Sample Output
	42

	Explanation
	For binary number fedcba , Decimal number = f * 2^5 + e * 2^4 + d * 2^3 + …..+ a * 2^0.


*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int N;
	cin>>N;

	int digit;
	int decimal;

	int exponent = 0; //it is like 2^exponent; .... 1*2^2 + 0*2^1 + 1*2^0

	while(N>0){
		digit = N % 10; //get the last digit of binary number

		if(digit == 1){ 
			decimal += pow(2,exponent);
			exponent++;
		}
		else{
			exponent++;
		}
		N= N/10;  //remove the last digit 
	}
	cout<<decimal;

	return 0;
}