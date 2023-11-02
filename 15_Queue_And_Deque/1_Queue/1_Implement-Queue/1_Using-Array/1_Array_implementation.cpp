#include<iostream>
using namespace std;

/* Shortening the code using macros*/
#define f Front 
#define r Rear 
#define cs Current_Size
#define ms Maximum_Size 
#define ds Default_size 

class Queue{

    int *arr;
    int f, r, cs, ms; //static data mem in Queue class

public:

    Queue(int ds = 5){
        arr = new int[ds]; 
        cs = 0;
        ms = ds;
        f = 0;
        r = ms -1;

        /* Logistic Diagram of code :
                f         r= ms-1
        arr--> +--+--+--+--+
               |  |  |  |  |  
               +--+--+--+--+
        
        Lets say if max size of queue can be 1000.
        Then we have specified default size = 5;
        if size is not mentioned by user.
        */
    }

    bool full(){
        return cs == ms;
    }

    bool empty(){
        return cs ==0;
    }

    void push(int data){
        if(!full()){
            r = (r+1) % ms;
            arr[r] = data;
            cs++;
        }
    }

    void pop(){
        if(!empty()){
            f = (f+1) % ms; 
            cs --;
        }
    }

    
    int front(){
        return arr[f];
    }

    ~Queue(){
        if(arr != NULL){
            delete [] arr;
            arr = NULL;
        }
    }

};


int main()
{   
       /*
    Queue q;

    for(int i=1; i<=6; i++){
        q.push(i);
    }

    q.pop();
    q.pop();
    q.push(7);

    while(!q.empty()){
        cout<< q.front()<< " ";
        q.pop();
    }
    //Output : 3 4 5 7 

    6 is not printed as default size of queue is 5.
    */

    Queue q(30); //Now queue size is 30

    for(int i=1; i<=6; i++){
        q.push(i);
    }

    q.pop();
    q.pop();
    q.push(7);

    while(!q.empty()){ //condn check before output
        cout<< q.front()<< " ";
        q.pop();
    }
    
    
    return 0;
}