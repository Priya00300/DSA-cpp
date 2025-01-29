//representation using adjacent list method which has less space complexity
//we will be deifing the index and in this index we will be storing thier neighbors 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n,m;
  cout<< "enter the number of nodes and edges";
  cin>>n>>m;
  vector<int> adj[n+1];
  cout<< "enter the connected:";
  for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  cout<< "printing the adjacency list"<<endl;
  for(int i=1;i<=n;i++)
    {
      cout<<"the node"<<i<<"->";
      for(int neighbor : adj[i]){
        cout<<neighbor<<" ";
      }
      cout<<endl;
    }
  return 0;
}