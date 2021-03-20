#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
void insertnode(node *&root, int data){
    if(root==NULL){
        node *nnode=new node(data);
        root=nnode;
    }
    else if(data<=root->data){
        insertnode(root->left,data);
    }
    else{
        insertnode(root->right,data);
    }

}
void inorder(node *root){
    if(root==NULL){
        return;
    }
    else{
        inorder(root->left);
        cout<<root->data<<"->";
        inorder(root->right);
    }

}
void preorder(node *root){
    if(root==NULL){
        return;
    }
    else{
        cout<<root->data<<"->";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root){
    if(root==NULL){
        return;
    }
    else{
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<"->";
    }
}
void searchnumber(node *root, int data){
    if(root==NULL){
        cout<<"Not found"<<endl;
    }
    else if(root->data==data){
        cout<<"Found"<<endl;
    }
    else if(data<=root->data){
        searchnumber(root->left,data);
    }
    else{
        searchnumber(root->right,data);
    }
}

int main(){
    node *root=NULL;
    bool isf;
    insertnode(root,15);
    insertnode(root,12);
    insertnode(root,10);
    insertnode(root,25);
    insertnode(root,14);
    insertnode(root,30);
    searchnumber(root,10);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl; 
    return 0;
}
