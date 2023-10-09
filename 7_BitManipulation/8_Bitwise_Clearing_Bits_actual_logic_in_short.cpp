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

void CLearingIbits(int &n, int i){
    /*logic only this much*/
    int Initialmask = (~0);
    int Finalmask = Initialmask<<i; 
    n = n & Finalmask;

}

int main()
{
    int n;cin>>n;
    int i =3;
    CLearingIbits(n,i);
    cout<<"In Decimal Final Answer is : "<<n<<endl;
    return 0;
}
