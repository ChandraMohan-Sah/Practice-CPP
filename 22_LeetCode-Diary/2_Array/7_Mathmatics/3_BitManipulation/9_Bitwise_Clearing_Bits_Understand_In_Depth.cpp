#include<iostream>
using namespace std;

/* 
   Run Negative-Decimal-to-binary.cpp at first and Analyze that :
   Decimal     Binary
     0          0
    -1          1    (value for +1 is also same)
    -2          10   (value for +2 is also same)
    -4          100  (value for +4 is also same)
    -8          1000 (value for +8 is also same)

    #You Observer (-2^x) gives same binary number as (2^x):

    BUT:
    -3          01   (value for +3 is different :3 == 11 in binary)
    -5          011  (value for +5 is different :5 == 101 in binary)
    -7          001  (value for +7 is different :7 == 111 in binary)

*/

/*-------------- Made this function just to analyze -ve decimal to binary (Skip this function)-----------------*/
string decimalToBinary(int n) {
    // Handle the special case of 0
    if (n == 0) {
        return "0";
    }

    // Convert the absolute value of n to binary
    string binary = "";
    int abs_n = abs(n);
    while (abs_n > 0) {
        binary = to_string(abs_n % 2) + binary;
        abs_n /= 2;
    }

    // Apply two's complement if n is negative
    if (n < 0) {
        // Invert the bits
        for (char &bit : binary) {
            if (bit == '0') {
                bit = '1';
            } else {
                bit = '0';
            }
        }

        // Add 1 to the inverted binary
        int carry = 1;
        for (int i = binary.size() - 1; i >= 0; i--) {
            if (binary[i] == '0' && carry == 1) {
                binary[i] = '1';
                carry = 0;
            } else if (binary[i] == '1' && carry == 1) {
                binary[i] = '0';
            }
        }
    }

    return binary;
}


void CLearingIbits_WithExplanation(int &n, int i){
        /*logic only this much*/
        int mask = (~0);
        mask = mask<<i;
        // n = n & mask;
        // cout<<n<<endl;

        //Extra stuffs to see bits 
        string x = decimalToBinary(n);
        cout<<"Binary Value for number "<<n<<" is : "<<x<<endl;

        string y = decimalToBinary(mask);
        cout<<"Binary Value for mask "<<mask<<" is : "<<y<<endl;

        n = n & mask;
        string z = decimalToBinary(n);
        cout<<endl<<"In Binary Final Answer with "<<i<<" bit cleared at last = "<<z<<endl;

    }


int main()
{
    int n;cin>>n;
    cout<<"Enter i bit to be cleared : "<<endl;
    int i ; cin>>i;

    CLearingIbits_WithExplanation(n,i);
    cout<<"In Decimal Final Answer is : "<<n<<endl;
    return 0;
}
