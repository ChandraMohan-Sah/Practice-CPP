#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

    node(int value){
        data = value;
        next = NULL;
    }
};


void InsertAtEnd(node* &head, int data){

    while( head != NULL){
        head = head->next;
    }

    node *n = new node(data);
    n->next = NULL;
    head->next = n; 
}


void print(node* head){
    while(head != NULL){
        cout<< head->data << "->";
        head = head->next;
    }
    cout<<endl;
}


int main()
{   
    node* head = NULL ;
    InsertAtEnd(head,4);
    InsertAtEnd(head,3);
    InsertAtEnd(head,2);
    InsertAtEnd(head,1);

    //Passing by value .So this prints twice
    print(head);
    print(head);


    return 0;
}