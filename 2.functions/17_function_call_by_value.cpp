#include<iostream>
using namespace std;

void CallByValue(int x ){
    x++;
}

int main()
{   
    int a = 10;
    
    cout<< "Value of a is : "<<a<<" i.e no changes."<< endl;
    
    return 0;
}