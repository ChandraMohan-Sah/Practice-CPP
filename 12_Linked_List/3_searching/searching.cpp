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

bool Searching(node* head, int key){ //NO modification; pass by value
    while( head != NULL){
        if(head->data == key){
            return true;
        }
        head = head->next;
    }    
    return false;
}

bool SearchingRecursive(node* head, int key){
    //base case
    if(head == NULL)
        return false;

    //recursive case
    if(head->data == key){
        return true;
    }else{
        return SearchingRecursive(head->next, key);
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

    int key;cin>>key;
    bool ans1 = Searching(head, key);
    bool ans2 = SearchingRecursive(head, key);

    if((ans1 && ans2 )== true){ //combining result of both function
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Element Not found "<<endl;
    }

    cout<<endl<<endl;
    return 0;
}