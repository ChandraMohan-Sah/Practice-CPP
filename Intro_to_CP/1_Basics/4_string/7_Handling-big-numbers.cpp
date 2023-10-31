/*
    We cannot directly take very big numbers .
    We need to take the values in string .
    like : number in the order of : 10^111
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout<<endl<<endl<<endl;


    string s = "1234737834834782348757837478242875";
    char ans = s[s.size() -1]; //last character i.e 5
    cout<<"Char value of last digit : "<<ans<<endl; //--->O/p : 5 ; 5 is character value.
    cout<<"Ascii value of last digit : "<<(int)ans<<endl; //--->O/p : 53 ; 53 is ascii value of 5.


    //integer value
    int last_digit = ans -'0';
    cout<<"Extracted integer value of last digit : "<<last_digit<<endl;
    cout<<"Now you can perform Arithmetic operation on last digit"<<endl;

    //arithmetic operation on last digit
    int x = last_digit+10;
    cout<<"Arithmetic Operation [last_digit + 10] : "<<x<<endl<<endl;


    return 0;
}