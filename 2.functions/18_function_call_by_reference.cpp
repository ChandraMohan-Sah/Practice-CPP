#include<iostream>
using namespace std;

void CallByReference(int &x ){ 
    x = x+1;
}

int main()
{   
    int a = 10;
    cout<<"Initial Value "<<a<<endl;
    CallByReference(a);
    cout<< "Updated Value is : "<<a<<" i.e value gets updated."<< endl;
    
    return 0;
}