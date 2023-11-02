
/*

Please Note that nodes are joined while returning only.

INPUT: 3 4 -1 6 -1 -1 5 1 -1 -1 -1 

            3
           / \
          /   \
         /     \
        /       \
       4         5
      / \        / \
   - 1   6      1  -1
        / \    / \   
      -1  -1 -1  -1 
      
 OUTPUT: 3 4  6 5 1 
 (Pre, Post, In) : Order Traversal , 
 All gives the same values.

            3
           / \
          /   \
         4     5
         \     /  
          6   1  
         

-------------------------
Input : 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

PreOrder  :   8 10 1 6 9 7 3 14 13 
Inorder   :   1 10 9 6 7 8 3 13 14 
PostOrder :   1 9 7 6 10 13 14 3 8     

*/

#include<iostream>
using namespace std;


class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }

};

//Recursive Build 
node* buildTree(){
    int d;
    cin>>d;

    if(d == -1){
        return NULL;
    }

    node * root = new node(d);
    root-> left = buildTree();
    root->right = buildTree();

    return root;
}


void printPre(node * root){ //root passed by value
    if(root == NULL){
        return;
    }
    //otherwise print root first followed by subtrees(children)
    cout<<root->data<<" ";
    printPre(root->left);
    printPre(root->right);
    
}

void printIn(node * root){ //root passed by reference
    if(root == NULL){
        return;
    }

    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}


void printPost(node* root){
    if(root == NULL){
        return ;
    }

    printPost(root->left);
    printPost(root->right);
    cout<<root->data<<" ";
}


int main()
{
    node* root = buildTree();
    printPre(root);
    cout<<endl;

    printIn(root);
    cout<<endl;

    printPost(root);
    cout<<endl;

    return 0;
}
