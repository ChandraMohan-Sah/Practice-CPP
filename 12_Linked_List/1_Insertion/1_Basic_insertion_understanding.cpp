/*
1. What does it mean ?
 = node *head = new node();

-> node *head: This declares a pointer variable named head of type node. 
   This pointer will be used to store the memory address of a node object.

      head         [   data   next   ] This is of node type.
    +---+---+      |  +-----+-----+  |
    | 30001 | ---> |  | 3   | 4   |  |
    +---+---+      [  +-----+-----+  ]
    Address

        
->head la address store garxa .And its address ko value  changes as per the node currently being accessed.
    e.g head->data ; gives data field of node currently being pointed.
        head->next ; gives next address field of node connected to current node.


->So, when this line [node *head = new node();] is executed, it creates 
  a new node object on the heap, initializes it with the default constructor 
  (if one exists in the node class), and stores the address of that object 
  in the head pointer.


NOTE : Few pointer vairables
    
   1. void Addition(int* var); var is pointer variable of type int. ; var is passed as "pass by value";
   2. void Addition(int* &var);  ......; var is passed as "pass by reference";

   3. void Insertion(node* value);    value is pointer variable of type node.; value is passed as "pas by value";
   4. void Insertion(node* &value);   value is pointer vaiable of type node ; value is passed as "passed as reference";
                                    Used to modify actual value of "value" pointer.

*/


/* CREATION OF MORE THAN 2 NODES (Num of pointers = Num of Nodes) */

#include<iostream>
using namespace std;

class node{
    public:
        int data;
        struct node *next;

    //You can create constructor as well 
};

int main(){
    //initialization of 2nd node ---Using head pointer
    node *head = new node();
    head->data = 56;
    head->next =NULL;


    //initialization of 2nd node ---Using temp pointer
    node *temp = new node();
    temp->data =45;
    temp->next =NULL;
    head->next=temp; //updation of next of head
    

    //initialization of 3rd node ---Using curr pointer
    node *curr = new node();
    curr->data =65;
    curr->next =NULL;
    temp->next= curr; //updation of next of head


    //Displaying output
    cout<<"Data of 1st node :"<<endl;
    cout<<"Data - "<<head->data<<endl;
    cout<<"Address 0f another node - "<<head->next<<endl<<endl;


    cout<<"Data of 2st node :"<<endl;
    cout<<"Data - "<<temp->data<<endl;
    cout<<"Address 0f another node - "<<temp->next<<endl<<endl;


    cout<<"Data of 3rd node :"<<endl;
    cout<<"Data - "<<curr->data<<endl;
    cout<<"Address 0f another node - "<<curr->next<<endl<<endl;

    return 0;
}