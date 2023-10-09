/*
    See NoteBook For Better Understanding :

                     j=4   i=2(exclude this bit while masking)
                     |     | 
    Bit Position = 5 4 3 2 1 0th bits
    number       = 0 0 1 1 1 1  (For n = 15)
    InitilMask   = 1 1 1 1 1 1  ~(0)
    mask_A       = 1 1 0 0 0 0  (InitialMask << 4)
    mask_B       = 0 0 0 0 1 1  ((1<<2)-1)--------->Left Shift - 1 :Always gives set bit till i bits (Here i=2)
    Finalmask    = 1 1 0 0 1 1  (mask_A | mask_B)

    ans = (n & FinalMask)
        0 0 1 1 1 1
      & 1 1 0 0 1 1
       --------------
        0 0 0 0 1 1 

*/


#include<iostream>
#include<cmath>
using namespace std;

void ClearRangeOfBits(int &n, int j, int i){
    int InitialMask = (~0);
    int mask_A = InitialMask << j;
    // int mask_B = 2^i - 1;
    int mask_B = (1<<i) -1;
    int FinalMask = (mask_A | mask_B);

    n = (n & FinalMask);
}

int main()
{
    int n; cin>>n;
    int j=4,i=2; //window size to 6-2 =4 (excluding i=2)
    ClearRangeOfBits(n, j, i);
    cout<<n<<endl;
    return 0;
}