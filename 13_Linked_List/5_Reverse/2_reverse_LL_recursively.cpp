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


void ReverseListRecursive(node* &head){ //modification of head is done ; So pass by reference .
    node* prev = NULL;
    node* current = head;
    node* temp;

    //base case
    if(current == NULL){
        return ;
    }

    //recursive case
    temp = current->next;
    current->next = prev;

    prev = current;
    current = temp;

    return ReverseListRecursive(current);
}


int main()
{   
    cout<<endl<<endl;
    node *head = NULL;
    take_input(head );

    print(head);cout<<endl<<endl;


    cout<<"Reversed Linked List : "<<endl;
    ReverseListRecursive(head);
    print(head);


    cout<<endl<<endl;
    return 0;
}