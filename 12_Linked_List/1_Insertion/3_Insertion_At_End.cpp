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


void print(node* head){
    while(head != NULL){
        cout<< head->data << "->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

void InsertAtTail(node* &head , int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node * tail = head; //Note this is created statically ,get deleted as soon as function call is removed.
                        //However, dynamically created node donot gets deleted.
    while(tail -> next != NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return ;
}

int main()
{   
    node* head = NULL ;
    InsertAtTail(head,14);
    InsertAtTail(head,13);
    InsertAtTail(head,12);
    InsertAtTail(head,11);

    //Passing by value .So this prints twice
    print(head);
    print(head);


    return 0;
}