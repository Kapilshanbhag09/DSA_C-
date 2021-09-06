#include<iostream>
#include<unordered_map>
#include<list>
#include<set>
using namespace std;
class Graph{
    public:
    unordered_map<string,list<pair<string,int>>>adlist;
    void addedge(string u, string v, int dist){
        adlist[u].push_back(make_pair(v,dist));
        adlist[v].push_back(make_pair(u,dist));
    }
    void printlist(){
        for(auto i:adlist){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<" (";
                cout<<j.first<<",";
                cout<<j.second<<"),";
            }
            cout<<endl;
        }
    }
    void prims(string start){
        unordered_map<string,string>parent;
        unordered_map<string,int>weight;
        unordered_map<string,bool>visited;
        set<pair<int,string>>s;
        for(auto i:adlist){
            parent[i.first]="-";
            weight[i.first]=INT_MAX;
            visited[i.first]=false;
        }
        parent[start]="-1";
        weight[start]=0;
        s.insert(make_pair(0,start));
        while(!s.empty()){
            auto p=*(s.begin());
            string node=p.second;
            s.erase(s.begin());
            for(auto i:adlist[node]){
                if(i.second<=weight[i.first] && visited[i.first]==false){
                    weight[i.first]=i.second;
                    parent[i.first]=node;
                    s.insert(make_pair(i.second,i.first));
                }
            }
             visited[node]=true;
        }
        cout<<"The MST is"<<endl;
        int minweight=0;
        for(auto i: parent){
            if(i.first !=start){
            cout<<i.first<<" and "<<i.second<<" and weight "<<weight[i.first]<<endl;
            minweight+=weight[i.first];
            }
        }
        cout<<"The minimum cost of the graph is: "<<minweight;


    }
};
int main(){
    Graph g;
    // g.addedge("0","1",4);
    // g.addedge("0","2",8);
    // g.addedge("1","2",2);
    // g.addedge("1","3",6);
    // g.addedge("2","4",9);
    // g.addedge("2","3",3);
    // g.addedge("3","4",5);
    //Second one
    g.addedge("1","6",10);
    g.addedge("1","2",28);
    g.addedge("5","6",25);
    g.addedge("5","7",24);
    g.addedge("7","4",18);
    g.addedge("7","2",14);
    g.addedge("5","4",22);
    g.addedge("2","4",12);

    g.prims("1");
    return 0;
}