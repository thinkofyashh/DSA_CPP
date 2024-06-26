#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
    Node(int data,Node*left,Node*right){
        this->data=data;
        this->left=left;
        this->right=right;
    }
};


void inorder(Node*root){
    if(root==nullptr){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->left->right->left=new Node(8);
    root->right=new Node(3);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->right->right->left=new Node(9);
    root->right->right->right=new Node(10);
    
    
    cout<<endl;
    inorder(root);
    
    return 0;
}
