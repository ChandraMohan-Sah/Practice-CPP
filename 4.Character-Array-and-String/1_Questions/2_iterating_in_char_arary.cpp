//It is not mendatory to use loop 
//However it can be useful sometime 
//to know how to loop through char array

#include<iostream>
using namespace std;

int main()
{
    char a[30] = "Hello World";

    cout<<a<<endl;
    
    for(int i=0; a[i]!='\0'; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    /* Mistake may occur frequently . see loop condn

    for(int i=0; i!='\0'; i++){ 
        cout<<a[i]<<" ";
    }
    cout<<endl;

    */
    return 0;
}