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
node * Findmin(node * root){
    if(root->left==NULL){
        return root;
    }
    else{
        Findmin(root->left);
    }
    
}
void deletenode(node *&root,int data){
    if(root==NULL){
        return;
    }
    else if(data<root->data){
        deletenode(root->left,data);
    }
    else if(data>root->data){
        deletenode(root->right,data);
    }
    else{
        //Case 1:if root has 0 child
        if(root->left==NULL &&root->right==NULL){
            delete root;
            root=NULL;
        }
        //Case 2:if root has 1 child
        else if(root->left==NULL){
            node *temp=root;
            root=root->right;
            delete temp;
    }
    else if(root->right==NULL){
            node *temp=root;
            root=root->left;
            delete temp;
    }
    //Case 3:if root has 2 child
    else{
        node * temp=Findmin(root->right);
        root->data=temp->data;
        deletenode(root->right,temp->data);
        
    }
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
int main(){
    node *root=NULL;
    insertnode(root,10);
    insertnode(root,5);
    insertnode(root,15);
    insertnode(root,20);
    insertnode(root,1);
    insertnode(root,7);
    insertnode(root,3);
    inorder(root);
    cout<<endl;
    deletenode(root,10);
    inorder(root);
    return 0;
}