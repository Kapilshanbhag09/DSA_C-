#include<iostream>
#include<math.h>
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
int heightoftree(node *root){
    if(root==NULL){
        return(-1);
    }
    else{
        return max(heightoftree(root->left),heightoftree(root->right))+1;
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
    cout<<"Height of tree"<<heightoftree(root)<<endl;
    return 0;
}
