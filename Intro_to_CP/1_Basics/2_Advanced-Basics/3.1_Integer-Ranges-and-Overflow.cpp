/*
Note:
    int, long int , long long int; 

    Rough Range of :----------------------->
    int --> [-10^9 < int < 10^9]
    long int ---> [-10^12 < int < 10^12]
    long long int ---> [-10^18 < int < 10^18]
    <--------------------------------------->
*/

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    //1.Understand Overflow
    int a = 100000;
    int b = 100000;
    int c = a*b;
    cout<<"1.Observer Overflow : "<<c<<endl;  //----->  O/p : 1410065408 [Incorrect]


    long int j = a*b; //calculation  a and b both int so answer is int ; that is later on stored in long int ; make no sense
    cout<<"2.Observer Overflow : "<<j<<endl;  //----->  O/p : 1410065408 [Incorrect]


    long int  k = a* 1ll * b; //calculation in l int ; 
    cout<<"3.Overflow Correction : "<<k<<endl;  //----->  O/p : 10000000000 [Correct Answer]


    long int d = 100000;
    long int e = 100000;
    long int f = d*e;
    cout<<"4.Overflow Correction : "<<f<<endl;  //----->  O/p : 10000000000 [Correct Answer]


    int max = INT_MAX ;
    cout<<endl<<"5.Maximum value of int [INT_MAX] ~ (Approx : 10^9) : "<<max<<endl; //-----> O/p : 2147483647 [Correct]

    int min = INT_MIN ;
    cout<<"6.Minimum value of int [INT_MIN] ~ (Approx : -10^9) : "<<min<<endl; //-----> O/p : 2147483647 [Correct]

    max = INT_MAX + 1;
    cout<<"7.Observe Overflow [INT_MAX + 1] : "<<max<<endl; //-----> O/p : warning: integer overflow in expression of type ‘int’ results in ‘-2147483648’
    cout<<"You can observer that on addition on INT_MAX by 1 it gave value of INT_MIN :-> Overflow"<<endl;


    //2.Understanding Precision
    // Must Watch : https://www.youtube.com/watch?v=xpl3AYYTM8o


    return 0;


}


