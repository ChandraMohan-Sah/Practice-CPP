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


node* merge(node* head1, node* head2){
    //base case
    if(head1 == NULL){
        return  head2;
    }
    if(head2 == NULL){
        return head1;
    }

    //take a head pointer
    node* c;

    if(head1->data < head2->data){
        c = head1;
        c->next = merge(head1->next, head2);
    }else{
        c= head2;
        c->next = merge(head1, head2->next);
    }

    return c;
}



int main()
{   
    cout<<endl<<endl;

    node *head1 = NULL;
    take_input(head1); //take reverse sorted input

    node *head2 = NULL;
    take_input(head2); //take reverse sorted input


    print(head1);cout<<endl;
    print(head2);cout<<endl;

    node* newhead = merge(head1, head2);
    print(newhead);

    cout<<endl<<endl;
    return 0;
}




