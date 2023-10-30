/*
    Stack uses LIFO : Last In First Out.
    Templated stack helps to make stack of any data type.

*/

#include<iostream>
#include<vector>
using namespace std;

//Implementation of stack data structure uing vector
template<class T, typename U>
class stack{
    private:
        vector<T> v;
        vector<U> v2;
    public:

        //Pushing into stack :1 element at once
        void push(T data){
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
        T top(){
            return v[v.size() -1];
        }
};


// Think of inserting two stuffs like <int, string> .....
// This code is incomplete ,
// First See the Generic Programming section then solve this
