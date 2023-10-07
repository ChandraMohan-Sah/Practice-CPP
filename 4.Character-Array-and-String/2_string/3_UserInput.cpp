/*Taking input from user using string

getline(arg1, arg2, arg3);

arg1 --> cin
arg2 --> Name_of_string
arg3 --> Delimiter : By Default Delimiter is '\0'. 
                     You can change as per your need like '$'.
*/


#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    //cin >>s; cannot take input afterward pressed space

    getline(cin,s);
    cout<<endl<<"Output is : "<<s<<endl;

    
    return 0;

}