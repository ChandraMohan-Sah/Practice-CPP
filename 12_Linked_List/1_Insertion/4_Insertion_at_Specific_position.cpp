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

int length(node* head){
    int count =0;

    while( head !=NULL ){
        count++;
        head = head->next;
    }

    return count;

}

void InsertAtBeginning(node* &head, int data){
    if(head == NULL){
        head = new node(data);
        return;
    }

    node *n = new node(data);
    n->next = head;
    head = n; 
}

void InsertAtTail(node* &head , int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node * tail = head;
    while(tail -> next != NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return ;
}

void  InsertAtSpecPosition(node * &head, int data , int p){
    //corner case
    if(head == NULL || p == 0){
        InsertAtBeginning(head, data);
        return;
    }
    else if(p>length(head)){
        InsertAtTail(head, data);
        return;
    }
    else{
        //take p-1 jumps
        int jump =1;
        node* temp = head; //storing head address in temp pointer
        while(jump <= p-1){
            temp = temp -> next;
            jump++;
        }

        //create a new node
        node *n = new node(data);
        n -> next = temp ->next; //Repositioning
        temp->next =n;
    }
}


int main(){
    node* head = NULL;
 
    InsertAtBeginning(head,4);
    InsertAtBeginning(head,3);
    InsertAtBeginning(head,2);
    InsertAtBeginning(head,1);
    InsertAtTail(head,14);
    InsertAtTail(head,13);
    InsertAtTail(head,12);
    InsertAtTail(head,11);


    int position; 
    cout<<"Enter Position : "<<endl;
    cin>>position;
    InsertAtSpecPosition(head, 99, position);

    print(head);
}


