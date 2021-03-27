#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.size()<<endl;//Size of stack
    cout<<"The Stack is :"<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();//Pop the top element
    }
    return(0);
}