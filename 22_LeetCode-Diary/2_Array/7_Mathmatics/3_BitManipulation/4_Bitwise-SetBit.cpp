/* SUMMARY

1.SetBit at given bit postion :
    e.g number = 10 ; Set bit(v=0) at i=3rd position

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

    ---------------------------------------------------------------------
    PROCESS:
    1. perform Bitwise OR(|) operation : (First perform ClearBit Operation then perform SetBit Operation)

        final_answer = (semi_answer | set_mask)

          number  = 1 0 1 0 
        clearmask = 1 0 0 0 (1 << 3rd bit)
       ~clearmask = 0 1 1 1
    semi_answer   = 0 0 1 0 (number & (~clearmask)) 

    semi_answer   = 0 0 1 0
        set_mask  = 0 v 0 0 (v << i=2nd bits) : v can be 0 or 1 as per user input.
    final_answer  = 0 v 1 0 (semi_answer | set_mask)

    final_answer  = 0 v 1 0 (Hence, 2nd bit has been set as per user input.)
    -------------------------------------------------------------------------

    NOTE : v is bit to be set as per user need
    <------- v<<i -------> 
    0000(if v =0 and i =3rd bit position)
    1000(if v =1 and i =3)

    -------------------------------------------------------------------------

*/


#include<iostream>
using namespace std;


/* This function is made just for convenience */
void Decimal_to_Binary(int decimal_number){
    int binary[20], i=0;

    int backup = decimal_number;
    while(decimal_number >0){
        binary[i] = decimal_number % 2; //array has binary number in reverse order
        decimal_number /=2;
        i++;    //at end i is increamented by 1 more  but got out of loop
    }

    i = i-1; //Decrement by 1 as 1 was incremented before loop check. see copy
    cout<<endl<<endl<<"Binary number of "<<backup<<" is : ";
    for(; i>=0; i--){
        cout<<binary[i];
    }
    cout<<endl;
}

/*----Actual Logic only this much -----*/
void ClearBit_Then_SetBit(int n, int v, int i ){

    //this is actuall code for ClearBit
    int clearmask = 1<<i;
    clearmask = (~clearmask);
    int semi_answer = (n & clearmask);

    //this is actuall code for SetBit after performing ClearBit
    int set_mask = v<<i;
    int final_answer = (semi_answer | set_mask); //Perform OR operation

    cout<<"After Operation : "<<final_answer <<endl;
    cout<< final_answer<< " "<<endl;
}


int main()
{
    int number = 10;
    Decimal_to_Binary(number);


    cout<<"On which bit operation is to be performed ?";
    int ith_bit; 
    cin>>ith_bit; //You can ask user in which bit vth_bit is to be performed.
    

    cout<<"What to do , either sit bet or reset bit : ";
    int vth_bit; 
    cin>>vth_bit; //You can ask user either to set bit (1) or to reset bit (0).

    cout<<"Before Operation : "<<number <<endl;
    ClearBit_Then_SetBit(number, vth_bit, ith_bit);

    return 0;
}