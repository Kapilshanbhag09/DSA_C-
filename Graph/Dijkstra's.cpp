#include<iostream>
#include<unordered_map>
#include<list>
#include<set>
#include<string>
using namespace std;

class Graph{
    unordered_map<string,list<pair<string,int>>>adlist;
    public:
    void addedge(string u, string v, int dist, bool bidirec=true){
        adlist[u].push_back(make_pair(v,dist));
        if(bidirec){
            adlist[v].push_back(make_pair(u,dist));
        }
    }
    void printlist(){
        for(auto i:adlist){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<"(";
                cout<<j.first<<",";
                cout<<j.second<<"), ";
            }
            cout<<endl;
        }
    }
    void dijkstras(string src){
        //map which contains shortest distance
        unordered_map<string,int>dist;
        //Set all dist to infinity
        for(auto j:adlist){
            dist[j.first]=INT_MAX;
        }
        //Make a set to find a node with the minimum distance
        set<pair<int,string>>s;
        dist[src]=0;
        s.insert(make_pair(0,src));
        while (!s.empty())
        {
            //Find the pair at the front
            auto p= *(s.begin());
            string node=p.second;
            int nodedist=p.first;
            s.erase(s.begin());
            //Iterate over neighbours of current node
            for(auto childPair : adlist[node]){
                if(nodedist+childPair.second< dist[childPair.first]){
                    //In the set updation is not possible
                    //Remove old pair and insert new pair
                    string dest=childPair.first;
                    auto f=s.find(make_pair(dist[dest],dest));
                    if(f!=s.end()){
                        s.erase(f);
                    }
                    dist[dest]=nodedist+childPair.second;
                    s.insert(make_pair(dist[dest],dest));
                }
            }

        }
        for(auto i:dist){
            cout<<i.first<<" -> "<<i.second<<endl;
        }
        
    }

};
int main(){
    Graph g;
    g.addedge("A","B", 5);
    g.addedge("A","C", 1);
    g.addedge("A","E", 10);
    g.addedge("B","E", 12);
    g.addedge("B","D", 4);
    g.addedge("C","E", 3);
    g.addedge("D","E", 5);
    g.printlist();
    g.dijkstras("A");
    return 0;
}