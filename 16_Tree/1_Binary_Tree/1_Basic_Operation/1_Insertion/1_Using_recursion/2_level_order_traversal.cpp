
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
          
height = 3

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

void printKthLevel(node*root , int k){
    if(root == NULL){
        return;
    }
    if(k ==1){

        cout<<root->data<<" ";
        return;
    }
    
    printKthLevel(root->left, k-1);
    printKthLevel(root->right, k-1);
    return;
}

int height(node* root){
    if(root == NULL){
        return 0;
    }

    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs) + 1;
}


void printAllLevels(node* root){
    int H = height(root);

    for(int i=1; i<=H; i++){
        cout<<"Level "<<i<<" : ";
        printKthLevel(root,i);
        cout<<endl;
    }
    return ;
}


int main()
{
    node* root = buildTree();
    cout<<"Height : "<<height(root)<<endl;

    cout<<"Print 3rd Level : "<<endl;
    printKthLevel(root,3);
    cout<<endl;
    printAllLevels(root);

    return 0;
}
