/*
    Time Complexity of various operation.

    push(i) --> 0(1);
    pop() --> 0(1);
    top() --> 0(1);
    empty() --> 0(1);

*/

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> s;

    //push element into stack
    for(int i=0; i<=5; i++){
        s.push(i);
    }

    //Remove/Print all elements
    while(!s.empty()){
        cout<<s.top()<<" ,";
        s.pop();
    }
    return 0;
}