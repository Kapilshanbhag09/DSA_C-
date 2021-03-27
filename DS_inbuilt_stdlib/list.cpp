#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>li;
    li.push_front(10);//Insert element at head
    li.push_back(20);//Insert element at tail
    li.push_back(30);
    li.push_back(40);
    li.push_front(50);
    list <int> :: iterator it;
    for(it = li.begin(); it != li.end(); ++it){
        cout << '\t' << *it;}
    li.pop_back();//Deletes element from tail
    li.pop_front();//Deleted element from head
    cout<<endl<<"After deleting"<<endl;
    for(it = li.begin(); it != li.end(); ++it){
        cout << '\t' << *it;}
    cout<<endl<<"After Rversing"<<endl;
    li.reverse();
    for(it = li.begin(); it != li.end(); ++it){
        cout << '\t' << *it;}
    cout<<endl<<"After sorting"<<endl;
    li.sort();
    for(it = li.begin(); it != li.end(); ++it){
        cout << '\t' << *it;}
    return 0;
}