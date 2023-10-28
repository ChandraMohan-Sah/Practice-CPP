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

//less efficient
node* ReverseListRecursive(node* head){ //modification of head is done ; So pass by reference .
    //Smallest Linked List
    if(head->next == NULL || head==NULL){
        return head;
    }

    //Rec Case
    node* shead = ReverseListRecursive(head->next);

    node* temp = shead;
    while(temp-> next !=NULL){
        temp = temp->next;
    }

    head->next = NULL;
    temp->next = head;
    return shead;
}


//Optimized code 
node* RevListRecur(node* head){ //modification of head is done ; So pass by reference .
    //Smallest Linked List
    if(head->next == NULL || head==NULL){
        return head;
    }

    //Rec Case
    node* shead = ReverseListRecursive(head->next);

    
    node * temp = head ->next;
    temp->next = head;
    head->next = NULL;
    return shead;
}


int main()
{   
    cout<<endl<<endl;
    node *head = NULL;
    take_input(head );

    print(head);cout<<endl<<endl;


    cout<<"Reversed Linked List : "<<endl;
    // head = ReverseListRecursive(head);
    head = RevListRecur(head);
    print(head);


    cout<<endl<<endl;
    return 0;
}