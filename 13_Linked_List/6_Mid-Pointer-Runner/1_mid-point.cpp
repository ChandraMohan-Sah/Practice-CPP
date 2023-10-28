#include<iostream>
using namespace std;


class node {
    public:
        int data;
        node *next;
    
    node(int value){
        data = value;
        next = NULL;
    }
};

void print(node * head){
    while( head !=NULL){
        cout<<head->data<<"->";
        head =head ->next; //updation
    }
    cout<<"NULL";

    return ;
}

void InsertAtBeginnig(node * &head, int data){ //modify head
    if(head == NULL){
        head = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = head;
    head =n; 
}

node* take_input(node* &head){ //modify head
    int data; cin>>data;
    while(data != -1){
        InsertAtBeginnig(head, data);
        cin >>data;
    }
    return head;
}


node* midpoint(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node* slow = head;
    node* fast = head-> next;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;

    }

    return slow;
}



int main()
{   
    cout<<endl<<endl;
    node *head = NULL;
    take_input(head );

    print(head);cout<<endl<<endl;

    node * mid = midpoint(head);
    cout<<"Mid Data is : "<<mid->data <<" ";
    
    cout<<endl<<endl;
    return 0;
}