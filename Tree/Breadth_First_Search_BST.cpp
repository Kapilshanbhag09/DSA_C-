#include<iostream>
#include<queue>
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
void Breadthfirst(node *root){
    if(root==NULL){
        return;
    }
    queue<node*>Q;//INbuilt queue
    Q.push(root);
    while (!Q.empty()){
        node *current=Q.front();
        cout<<current->data<<"->";
        if(current->left!=NULL){
            Q.push(current->left);

        }
        if(current->right!=NULL){
            Q.push(current->right);
        }
        Q.pop();//Removing element from front
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
    Breadthfirst(root);
    return(0);
}
/*Time Complexity: O(n);
Space complexity:O(n);*/