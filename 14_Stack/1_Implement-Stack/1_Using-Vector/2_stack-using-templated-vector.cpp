/*
    Stack uses LIFO : Last In First Out.
    Templated stack helps to make stack of any data type.

*/

#include<iostream>
#include<vector>
using namespace std;

//Implementation of stack data structure uing vector
template<class T>
class stack{
    private:
        vector<T> v;

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


class Book{
private:
    string name;
    int price;

    /*
        this pointer is used : if there are no naming conflicts between the parameters and the member variables.
        Book(const string& name) {
            this->name = name;
        }

        //correct arguments for constructor
        Either : const string& name;
        Or     : string name;
        Else   : const string name;

        However: string &name; --->This is incorrect;
    */

public:
    Book(const string &a, int p) {
        name = a;
        price = p;
    }

    void Print(){
        cout<<"Book Name : "<< name<<"  "<<"Price : "<<price<<endl;
    }

};


int main()
{   
    /* In this context, s1 is an instance/object of the stack class that 
    can hold elements of type int. You can use this object to push, pop, 
    and access elements within the stack.*/

    stack <int> s1; 
    for(int i=1; i<=5; i++){
        s1.push(i*i);
    }

    stack <char> s2;
    for(int i=65; i<=70; i++){
        s2.push(i);
    }

    //stack<Book> s3("Ram");  // You can't initialize a stack this way.

    stack<Book> s3;
    // Create Book object then  push them into the stack
    Book a("Harry Potter", 300);
    Book b("Pirates of the Carribian", 700);
    s3.push(a);
    s3.push(b);
    s3.push(Book("Bhagwat Geeta", 900));


    //Print content of stack
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }

    cout<<"---------------------"<<endl<<endl;
    while(!s2.empty()){
        cout<<s2.top()<<endl;
        s2.pop();
    }

    cout<<"---------------------"<<endl<<endl;
    while (!s3.empty()) {
        Book x = s3.top(); //Create instance of book that save content of top temporatily.
        x.Print();
        s3.pop();
    }

    return 0;
}