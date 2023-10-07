/*
Note :     cout <<1 % 2<<endl;  ==> 1
           cout <<1 / 2<<endl;  ==> 0
*/

/* 

// Code works but I dont know how it works ??

#include<iostream>
using namespace std;

int main()
{
    int decimal_number;
    cin >>decimal_number;

    int rem;
    int binary_num =0 , i=1;

    while(decimal_number >0){
        rem = decimal_number % 2 ; //gives reminder
        binary_num = binary_num  + (rem *i) ;   //
        decimal_number /= 2;     // 
        i = i* 10; 
    }

    cout<<binary_num;
    return 0;
}

*/

#include<iostream>
using namespace std;

int main()
{
    int decimal_number;
    cin >>decimal_number;

    int binary[20], i=0;
    while(decimal_number >0){
        binary[i] = decimal_number % 2; //array has binary number in reverse order
        decimal_number /=2;
        i++;    //at end i is increamented by 1 more  but got out of loop
    }

    i = i-1; //Decrement by 1 as 1 was incremented before loop check. see copy

    for(; i>=0; i--){
        cout<<binary[i];
    }
    cout<<endl;
    return 0;

}







