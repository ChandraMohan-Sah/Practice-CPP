/*
    Given 
              j=5   i=2(Including this bit while masking : to include use (i-1))
              |     |
    N   : 1 0 1 1 0 1 0 
    M   : 1 0 1 1
    Update N with the value M from i=2 to j=5 (4 digits are to be updated.)

    Process:
    1. Update M : Put M bits at correct place by left shift : 
                  updated_M = m<<(i-1);

    2. Update N : 1st clear the bits from i=2 to j=5 position on N bits.
                  2nd Update N by Performing OR operation (updated_M | updated_N)

*/


#include<iostream>
#include<cmath>
using namespace std;

int ClearRangeOfBits(int &n, int j, int i){
    int InitialMask = (~0);
    int mask_A = InitialMask << j;
    // int mask_B = 2^i - 1;
    int mask_B = (1<<i) -1;
    int FinalMask = (mask_A | mask_B);

    n = (n & FinalMask);
    return n;
}

void updatedBitsIn_N(int &n, int &m, int i, int j){
    int updated_m = m<<(i-1);
    int updated_n = ClearRangeOfBits(n,j,i-1);

    updated_n = (updated_n | updated_m);
    cout<<"Updated n : "<<updated_n<<endl;
}

int main()
{
    int n=15;
    int m =2;

    int i=2;
    int j=4;

    updatedBitsIn_N(n, m, i, j);
    return 0;
}