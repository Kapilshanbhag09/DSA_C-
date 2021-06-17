#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
class Graph{
public:
    void inserathead(Node*&head,int data){
        Node *n=new Node(data);
            n->next=head;
            head=n;
        }
    void insertattail(Node*&head,int data){
        Node *n=new Node(data);
        if(head==NULL){
            head=n;
        }
        else{
            Node * temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=n;
        }
    }
    void deleteathead(Node *&head){
        Node *temp=head;
        head=head->next;
        free (temp);
    }
    void deleteattail(Node *&head){
        Node *temp=head;
        Node*temp1=head->next;
        while(temp1->next!=NULL){
            temp1=temp1->next;
            temp=temp->next;
        }
        temp->next=NULL;
        free(temp1);
    }
    void printlist(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
    void length(Node *head){
        Node *temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        cout<<endl<<"The length is "<<count<<endl;
    }
};
int main(){
    Node *head=NULL;
    Graph g=Graph();
    g.inserathead(head,1);
    g.inserathead(head,2);
    g.inserathead(head,3);
    g.insertattail(head,4);
    g.insertattail(head,5);
    g.printlist(head);
    g.length(head);
    g.deleteathead(head);
    g.printlist(head);
    g.length(head);
    cout<<endl;
    g.deleteattail(head);
    g.printlist(head);
    g.length(head);
    return 0;
}