//to ways to store 
//first- matrix way
//second - list way
//matix - adjacent c matrix
//adj[n+1][n+1]
//list - adj[n+1]o(n)

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<< "enter the number of nodes";
  cin >> n;
  int adj[n+1][n+1];
  cout<< "enter the edges";
  for(int i=0;i<n;i++){
    int u,v;
    cin>>u>>v;  
    adj[u][v]=1;
    adj[v][u]=1;
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
      {
        if(adj[i][j]==1)
          cout<<adj[i][j]<<" ";
      }
    cout<<endl;
  }
  return 0;
}