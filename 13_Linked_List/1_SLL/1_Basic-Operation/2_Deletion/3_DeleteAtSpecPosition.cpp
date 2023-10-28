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


int length(node* head){
    int cnt =0;
    while(head != NULL){
        cnt++;
        head = head ->next; //updation
    }
    return cnt;
}


void print(node * head){
    //node *temp = head; head is passed by value .So no need to create temp variable. 
                         //As it doesnot affect origin head pointer

    while( head !=NULL){
        cout<<head->data<<"->";
        head =head ->next; //updation
    }
    cout<<"NULL";

    return ;
}

void InsertAtBeginnig(node * &head, int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = head;
    head =n; 
}

void DeleteAtBeginning(node* &head){ //For modification; pass by reference
    if(head == NULL){
        return;
    }

    node *temp = head->next;
    delete head; //deleting value contained in head ; not the head variable.
    head =temp;

}   


void DeleteAtEnd(node * &head){
    if(head == NULL){
        return;
    }

    if(head->next ==NULL){
        delete head;
        head = NULL;
        return;
    }

    node *prev =head;
    node *tail = prev->next;
    while(tail->next != NULL){
        prev = tail;          //updation
        tail = tail->next;    //updation
    }

    delete tail;
    prev->next = NULL;
    return;
}


void deleteAtSpecPosition(node* &head, int p){

    if(head == NULL || p==0){
        DeleteAtBeginning(head);
        return;
    }
    else if(p>length(head)){
        DeleteAtEnd(head);
        return;
    }
    else{
        //take p-1 jumps
        int jump =1;
        node* prev = head;
        node* temp = prev ->next;
        while(jump <= p-1){
            prev = temp;
            temp = temp ->next;
            jump++;
        }

        // Delete the node at position p
        prev->next = temp->next; // Update the next pointer of the previous node
        delete temp;
    }
}



int main()
{   
    cout<<endl<<endl;
    node *head = NULL; //Initial head pointer contains  NULL

    InsertAtBeginnig(head, 34);
    InsertAtBeginnig(head, 14);
    InsertAtBeginnig(head, 24);
    InsertAtBeginnig(head, 54);
    InsertAtBeginnig(head, 4);
    InsertAtBeginnig(head, 54);
    InsertAtBeginnig(head, 94);
    print(head);cout<<endl;

    int position = 4;
    deleteAtSpecPosition(head, position);
    print(head);

    cout<<endl<<endl;
    return 0;
}