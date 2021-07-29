#include<iostream>
#include<unordered_map>
using namespace std;
class Node{
public:
    char data;
    unordered_map<char,Node *>umap;
    bool isterminal;
    Node(char d){
        data=d;
    }
    
};
class Trie{
public:
    Node *root=new Node('\0');
//Adding word to a trie
void addWord(string word){
    Node *temp=root;
    for(int i=0;i<word.length();i++){
        char ch=word[i];
        if(temp->umap.count(ch)==0){
            Node *child=new Node(ch);
            temp->umap[ch]=child;
            temp=child;

        }
        else{
            temp=temp->umap[ch];
        }
    }
    temp->isterminal=true;
    
}
//searching in a trie
bool search(string word){
    Node *temp=root;
    for(int i=0;i<word.length();i++){
        char ch=word[i];
        if(temp->umap.count(ch)){
             temp=temp->umap[ch];
        }
        else{
            return false;
        }
    }
    return temp->isterminal;
}

};
int main(){
    Trie t=Trie();
    t.addWord("apple");
    t.addWord("apes");
    cout<<t.search("apple")<<endl;
    cout<<t.search("apes")<<endl;
    cout<<t.search("mango")<<endl;
    return 0;
}