#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<string,int>umap;
void sol(string s,int k){
    if(s.length()==0){
        sol("0",k);
        sol("1",k);
    }
    if(s.length()==k){
        if(umap[s]==0){
            umap[s]=1;
            cout<<s<<endl;
        }
        return;
    }
    if(s[s.length()-1]=='1'){
        sol(s+"0",k);
    }
    else{
    sol(s+"0",k);
    sol(s+"1",k);
    }


}

int main(){
    int k=0;
    cin>>k;
    string s;
    sol(s,k);

}
//https://www.geeksforgeeks.org/generate-binary-strings-without-consecutive-1s/