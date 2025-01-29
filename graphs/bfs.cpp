//breath first traversal
//uses fifo
//it uses a queue 
//visits node level by level 
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void bfs(int start,vector<vector<int>>& adj,vector<bool>& visited){
  queue<int> q;
  q.push(start);
  visited[start]=true;

  cout<<"bfs traversal"<<endl;
  while(!q.empty()){
    int node = q.front();
    q.pop();
    cout<< node<<" ";
    for(int neighbour :adj[node]){
      if(!visited[neighbour]){
        q.push(neighbour);
        visited[neighbour]=true;
      }
    }
  }
  cout<< endl;
}
int main(){
  int n,m;
  cout<< "enter the number of nodes and edges"<<endl;
  cin>>n>>m;
  vector<vector<int>> adj(n+1);
  vector<bool> visited(n+1,false);

  cout<<"enter the connected"<<endl;
  for(int i=1;i<=m;i++){
    int v,u;
    cin>>v>>u;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  int startnode;
  cout<<"enter the start node"<<endl;
  cin>>startnode;
  bfs(startnode,adj,visited);
  return 0;
}