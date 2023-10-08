/* 
SUMMARY : About Left Shift 

int a = 1; In Bits : 0001

index: 0   1   2   3rd index 
 bits: 3   2   1   0th bit(L.S.B)
      -----------------
      | 0 | 0 | 0 | 1 |
      -----------------

  Initially : a = 1; Sets the 0th bit
  -----------------
  | 0 | 0 | 0 | 1 |
  -----------------

  After left shift by 1 bits  : a = 2 ; 1<<1; Sets the 1st bit
  -----------------
  | 0 | 0 | 1 | 0 |
  -----------------

  After left shift by 2 bits  : a = 4 ; 1<<2; Sets the 2nd bit
  -----------------
  | 0 | 1 | 0 | 0 |
  -----------------

  After left shift by 3 bits  : a = 8 ; 1<<3; Sets the 3rd bit
  -----------------
  | 1 | 0 | 0 | 0 |
  -----------------

<--In General (for left shift): -------->
  a = a<<b is equal to:     
  a = a*2^b;

    if a = 1 : b = 3 then  a = 1 * 2^3 = 8 
    if a = 8 : b = 3 then a = 8 * 2^3 = 64


<--Similarly (for right shift) : --------->
  a = a>>b is equal to:     
  a = a/2^b;

    if a = 1 : b = 3 then  a = 1 / 2^3 = 0.125 ~ 0 
    if a = 8 : b = 3 then a = 8 / 2^3 = 1

<-------PLease Note that ------>
    1. Here, bits don't rotate after reaching the M.S.B or L.S.B
    2. Either bits keeps moving forward or keeps moving backward.
*/


#include<iostream>
using namespace std;

int main()
{
    int a,b;
    
    //bitwise left shift operator
    a=8;
    b=3;
    cout<<"Left Shift OPerator "<<(a<<b) <<endl;

    //bitwise right shift operator
    a=8;
    b=2;
    cout<<"Right shift Operator "<<(a>>b) <<endl;

    return 0;
}