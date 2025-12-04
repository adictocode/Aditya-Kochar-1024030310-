#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<queue>
using namespace std;
class Graph{
public:
int v; 
list<int> *l;
Graph(int V):v(V){
    l=new list<int>[v];
}
void addEdge(int v,int u){
    l[v].push_back(u);
    l[u].push_back(v);
}
void print (){
    for(int i=0;i<v;i++){
        cout<<"for vertex :"<< i<<endl;
        for(auto neigh : l[i]){
            cout<<neigh<< " ";
        }
        cout<<endl ;
    }
    
}
void bfs(){
  queue<int>q; 
  vector<bool>vis(v,false);
  q.push(0);
  vis.at(0)=true;
  while(!q.empty()){
    int u =q.front();
    q.pop();
    cout<<u<<" ";
    for(auto v:l[u]){
        if(!vis[v]){
        q.push(v);
        vis[v]=true;}
    }
  }
}
void dfshelper(int u,vector<bool>&vis){
      cout<<u<<" ";
      vis[u]=true;
      for(auto v : l[u]){
        if(!vis[v]){
         dfshelper(v,vis)   ;
        }
      }
    
}
void dfs(){
int src =0; 
vector<bool>vis(v,false);
dfshelper(src,vis);
}
};
int main() {
Graph g(5); 
g.addEdge(0,1);
g.addEdge(1,2);
g.addEdge(1,3);
g.addEdge(2,4);
cout<<"for bfs: "<<endl ;
g.bfs();
cout<<endl; 
cout<<"for dfs: "<<endl; 
g.dfs();
return 0;
}
