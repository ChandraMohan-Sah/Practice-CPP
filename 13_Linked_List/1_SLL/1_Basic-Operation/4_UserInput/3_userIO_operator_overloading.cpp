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
    cout<<"NULL"<<endl;

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

node* take_input(node* &head){
    int data; cin>>data;
    while(data != -1){
        InsertAtBeginnig(head, data);
        cin >>data;
    }
    return head;
}

//for "cout<<head;" As its return type is void
// void  operator<<(ostream &os, node* head){
//     print(head);
//     return;
// }


//for "cout<<head1<<head2;" As its return type is cout
ostream& operator<<(ostream &os, node* head){
    print(head);
    return os;
}

istream& operator>>(istream &is, node* &head){ //head should be modified .So pass by reference
    take_input(head);
    return is;
}


int main()
{   
    cout<<endl<<endl;

    node *head1 = NULL;
    node *head2 = NULL;
    // take_input(head1);
    // take_input(head2);
    cin>>head1>>head2;

    // print(head);
    cout<<head1<<head2;

    cout<<endl<<endl;
    return 0;
}
