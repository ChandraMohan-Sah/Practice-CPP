#include<iostream>
#include<cmath>
using namespace std;

int main() {

	int n;                      //----------Not Giving Correct answer -------------
	cin>>n;

	int N, digit;
	int exponent =0;

	int decimal;
	for(int i=1; i<=n; i++){
		cin>>N;
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
	}
	cout<<decimal<<endl;

	return 0;
}