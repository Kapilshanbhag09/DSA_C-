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

class LinkedList{
public:
    void insertathead(int data,Node *&head){
        Node *temp=new Node(data);
        temp->next=head;
        head=temp;
    }

    void middlepoint(Node*head){
        Node *fast=head;
        Node *slow=head;
        while (fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        cout<<"Middle data is : "<<slow->data<<endl;
        
    }
    void display(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList l;
    Node *head=NULL;
    l.insertathead(10,head);
    l.insertathead(20,head);
    l.insertathead(30,head);
    l.insertathead(40,head);
    l.insertathead(50,head);
    l.display(head);
    l.middlepoint(head);
    return 0;
}