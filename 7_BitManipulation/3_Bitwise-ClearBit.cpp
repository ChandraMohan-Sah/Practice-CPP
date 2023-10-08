/* SUMMARY

1.ClearBit at given bit postion :
    e.g number = 10 ; clear bit at i=3rd position

    Before Operation:
    bits:  3   2   1   0th bit(L.S.B)
         -----------------
         | 1 | 0 | 1 | 0 |  ==> 10
         -----------------

    After Operation:
    bits:  3   2   1   0th bit(L.S.B)
         -----------------
         | 0 | 0 | 1 | 0 |  ==> 2
         -----------------

    ---------------------------------------------------------
    PROCESS:
    1. perform Bitwise And(&) operation.
        answer = (number & (~mask))

        number = 1 0 1 0 
        mask   = 1 0 0 0 (1 << 3bits)
        ~mask  = 0 1 1 1  

        answer = 0 0 1 0 (Hence, 3rd bit has been cleared.)
    ---------------------------------------------------------

*/


#include<iostream>
using namespace std;


void ClearBit(int n, int i ){

    int mask = 1<<i;
    int neg_mask = (~mask);
    int answer;

    answer = (n & neg_mask);
    cout<< answer<< " "<<endl;

}


int main()
{
    int number = 10;
    int ith_bit = 3;
    ClearBit(number, ith_bit);
    return 0;
}