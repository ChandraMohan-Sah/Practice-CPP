/*  
    SUMMARY 
    1.  n = 1010 (Keep Shifting this number to right in each step until (n != 0) )
        1 = 0001

    2.  Perform and operation After ward :
        int count =0;
        while( n != 0){

            loop_cycle 1 : (1010 & 0001) = 0000 ; count is not afftected ; Right shift n : n = n>>1 = 0101;
            loop_cycle 2 : (0101 & 0001) = 0001 ; count++; n becomes 0010;
            loop_cycle 3 : (0010 & 0001) = 0000 : n becomes 0001;
            loop_cycle 4 : (0001 & 0001) = 0001 ; count++; n becomes 0000;

            since n = 0000 ; exit loop
        }
         

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count = 0;
    while(n>0){  
        if((n&1) == 1){ //1 imples lsb is 1
            count++;
        }
        n=n>>1;
    }

    cout<<"Number of Set Bits = "<<count;

    return 0;
}