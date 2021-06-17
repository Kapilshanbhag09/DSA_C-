#include<iostream>
#include<unordered_map>
#include<set>
#include<list>
using namespace std;
class Connection{
    public:
    unordered_map<string,list<pair<string,int>>>connlist;
    void addconn(string a,string b, int nowire){
        connlist[a].push_back(make_pair(b,nowire));
        connlist[b].push_back(make_pair(a,nowire));
    }
    void printconn(){
        for(auto i:connlist){
            cout<<i.first<<+"->";
            for(auto j:i.second){
                cout<<" (";
                cout<<j.first<<",";
                cout<<j.second<<"),";
            }
            cout<<endl;
        }
    }
    void minwire(){
        unordered_map<string, string>parent;
        unordered_map<string, int>wires;
        unordered_map<string,bool>visited;
        set<pair<int,string>>s;
        for(auto i: connlist){
            parent[i.first]="-";
            wires[i.first]=INT_MAX;
            visited[i.first]=false;
        }
        auto i=connlist.begin();
        string first=i->first;
        parent[first]="-1";
        wires[first]=0;
        s.insert(make_pair(0,first));
        while(!s.empty()){
            auto p=s.begin();
            string comp=p->second;
            s.erase(s.begin());
            for(auto i:connlist[comp]){
                if(i.second<wires[i.first] && visited[i.first]==false){
                    wires[i.first]=i.second;
                    s.insert(make_pair(i.second,i.first));
                    auto k=s.begin();
                    parent[i.first]=comp;
                }
            }
            visited[comp]=true;
        }
        int minwires=0;
        for(auto i: parent){
            if(i.first != first){
            cout<<"The computer "<<i.first<<" is connected to computer "<<i.second<<" and wire required is "<<wires[i.first]<<endl;
            
            minwires+=wires[i.first];
            }
        }
        cout<<"The minimum wires needed are : "<<minwires<<endl;

    }
    
};
int main(){
    int no=0;
    cin>>no;
    Connection c;
    while(no--){
        string fir,sec;
        int nowires=0;
        cin>>fir>>sec>>nowires;
        c.addconn(fir,sec,nowires);
    }
    c.printconn();
    c.minwire();
    return 0;
}








//there is a connection of lan wires between two computers. One connection is between 2 computers needs w number of wires. Similarly there are many computers that are connected. Find the minium number of wire to connect all computers to any one computer.