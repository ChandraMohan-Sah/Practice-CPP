#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if ( a >b){
        if(a>c){
            cout<<a<<" is Largest Element"<<endl;
        }
        else{
            cout<<c<<" is Largest Element"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<" is Largest Element"<<endl;
        }
        else{
            cout<<c<<" is Largest Element"<<endl;
        }
    }

    return 0;
}