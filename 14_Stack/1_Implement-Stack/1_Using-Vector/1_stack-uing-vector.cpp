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

};


int main()
{
    stack s;

    for(int i=1; i<=5; i++){
        s.push(i*i);
    }

    //Print content of stack
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}