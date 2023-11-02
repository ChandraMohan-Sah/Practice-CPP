/*

    Function is same when we create methods inside class .
    Just the difference occurs in calling the function outside the class.

    You Observed that ::
        1. When rev function is outside class ; Calling was like this int main() function.
                int main(){
                    stack s;
                    -
                    -
                    -
                    reverseStack(s);
                }

        2. When rev function is inside class ; Calling was like this int main() function.
                int main(){
                    stack s;
                    -
                    -
                    -
                    s.reverseStack(s);  
                }

*/


#include<iostream>
#include<vector>
using namespace std;


class stack{
private:
    vector<int> v;

public:

    void push(int data){
        v.push_back(data);
    }

    bool empty(){
        return v.size()==0;
    }

    void pop(){
        if(!empty()){
            v.pop_back();
        }
    }

    int top(){
        return v[v.size() -1];
    }

    //size of stack
    int size(){
        return v.size();
    }

    //----------------Reverse Logic---------------------->
    void transfer (stack &s1, stack &s2, int n){
        for(int i=0; i<n; i++){
            s2.push(s1.top());
            s1.pop();
        }
    }


    void reversStack(stack &s1){
        //helper stack
        stack s2; //an object of stack

        int n = s1.size();

        for(int i=0; i<n; i++){
            //pick the element at top and insert it at the bottom
            int x = s1.top();
            s1.pop();

            //transfer n-i-1 elements from stack s1 into s2
            transfer(s1, s2, n-i-1);

            //insert the element x in s1
            s1.push(x);

            //transfer n-i-1 elements from s2 to s1
            transfer(s2,s1, n-i-1);

    }

}


};




int main()
{
    stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.reversStack(s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}