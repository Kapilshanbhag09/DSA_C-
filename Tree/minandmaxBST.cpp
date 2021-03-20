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
int minele(node *root){
    if(root->left==NULL){
        return(root->data);
    }
    else{
        return(minele(root->left));
    }
}
int maxele(node *root){
    if(root->right==NULL){
        return(root->data);
    }
    else{
        return(maxele(root->right));
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
    cout<<"Min is:"<<minele(root)<<endl;
    cout<<"Max is:"<<maxele(root)<<endl;
    return 0;
}