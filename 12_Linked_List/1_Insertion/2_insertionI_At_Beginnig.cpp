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


void InsertAtBeginning(node* &head, int data){
    if(head == NULL){
        head = new node(data);
        return;
    }

    node *n = new node(data);
    n->next = head;
    head = n; 
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
    InsertAtBeginning(head,4);
    InsertAtBeginning(head,3);
    InsertAtBeginning(head,2);
    InsertAtBeginning(head,1);

    //Passing by value .So this prints twice
    print(head);
    print(head);


    return 0;
}