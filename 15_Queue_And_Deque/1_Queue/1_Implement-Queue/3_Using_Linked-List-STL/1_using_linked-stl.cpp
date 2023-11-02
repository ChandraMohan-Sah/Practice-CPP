#include<iostream>
#include<list>
using namespace std;

class Queue{
    int cs;
    list<int> l;

public:
    Queue(){
        cs = 0;
    }

    bool empty(){
        return cs == 0;
    }

    void push(int data){
        l.push_back(data);
        cs++;
    }

    void pop(){
        if(!empty()){
            l.pop_front();
            cs--;
        }
    }

    int front(){
        return l.front();
    }

};

int main()
{
    Queue q;

    //Inserting : 1 2 3 4 5 6 7 8 9 10
    for(int i=1; i<=10; i++){
        q.push(i);
    }

    q.pop();
    q.pop();

    q.push(11);

    while(!q.empty()){
        cout<< q.front() << " ";
        q.pop();
    }
    
    return 0;
}