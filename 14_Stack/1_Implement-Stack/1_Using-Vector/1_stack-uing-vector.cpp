/*
Stack Operations:
    void push(int data); --> Only push operation takes data.
    void pop(); ---> removes TOS element;
    bool empty(); ---> It returns state of Stack if empty or not;
    int top(); ---> It returns TOS element;   

    -----------------------------------------------------------------------------------
    In a vector-based implementation of a stack, you don't typically need an isFull() 
    function because vectors in C++ are dynamic arrays, and they can grow dynamically 
    to accommodate additional elements. 
    
    Unlike traditional fixed-size arrays, vectors automatically manage their memory, and 
    they can grow in size as needed when you push elements onto them. 
    
    This dynamic resizing is handled by the vector class itself, making it unnecessary to 
    check if the vector is full before pushing elements onto it.
    ---------------------------------------------------------------------------------------
*/

#include<iostream>
#include<vector>
using namespace std;

//Implementation of stack data structure uing vector

class stack{
private:
    vector<int> v;

public:

    //Pushing into stack :1 element at once
    void push(int data){
        v.push_back(data);
    }

    //Check if stack is empty or not
    bool empty(){
        return v.size()==0;
    }

    //Poping from stack :1 element at once
    void pop(){
        if(!empty()){
            v.pop_back();
        }
    }

    //See content on TOS
    int top(){
        return v[v.size() -1];
    }

    //see size of stack
    int size(){
        return v.size();
    }

};


int main()
{
    stack s;

    for(int i=1; i<=5; i++){
        s.push(i*i);
    }

    //Print the size of stack
    cout<<"Current Size of stack is : "<<s.size()<< endl;

    //Print content of stack
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}