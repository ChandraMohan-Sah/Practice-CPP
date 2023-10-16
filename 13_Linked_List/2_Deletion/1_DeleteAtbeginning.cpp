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
    //node *temp = head; head is passed by value .So no need to create temp variable. 
                        //As it doesnot affect origin head pointer

    while( head !=NULL){
        cout<<head->data<<"->";
        head =head ->next;
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


int main()
{
    node *head = NULL; //Initial head pointer contains  NULL

    InsertAtBeginnig(head, 34);
    InsertAtBeginnig(head, 14);
    InsertAtBeginnig(head, 24);
    InsertAtBeginnig(head, 54);
    print(head);

    cout<<"After Deletion of at Beginning : "<<endl;
    DeleteAtBeginning(head);
    print(head);

    
    return 0;
}