#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int binary_num;
    cin >> binary_num;

    int num = binary_num;
    int rem, mantissa=2 , exponent=0, decimal_num; //it is like 2^exponent; .... 1*2^2 + 0*2^1 + 1*2^0

    while(binary_num>0){
        rem = binary_num %10; //get the last digit of binary number

        if(rem == 1){
            decimal_num += pow(mantissa, exponent);
            exponent++;
        }else{
            exponent++;
        }

        binary_num /= 10; //remove the last digit 
    }



    cout << " Decimal Number of "<< num << " is "<<decimal_num;
    return 0;
}

