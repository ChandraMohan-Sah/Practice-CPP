/*
    Array of String

    string s[4]; ---> 4 string can be  stored 

    -------------------------------------
    | "apple" | "ball" | " cat" | "dog" |   --->Each string can be accessed by index as character array
    ------------------------------------

*/


#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s[20];
    int n;
    cin>>n; //n should not exceed 20

    cin.ignore();

    for(int i=0; i<n; i++){
        getline(cin, s[i]);
    }

    cout<<"Output is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<s[i]<<" ";
    }

    return 0;
}