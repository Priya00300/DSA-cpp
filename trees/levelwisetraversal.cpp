#include<iostream>
#include<vector>
#include <queue>
using namespace std;

struct Node{
int val;
Node* left;
Node* right;
Node(int val) : val(val), left(nullptr), right(nullptr) {}
};

class solution{
public:
vector<vector<int>> LevelOrder(Node* root){
 vector<vector<int>> ans;
 if(root==nullptr)
    return ans;
  queue <Node*> q;
  q.push(root);

while(!q.empty()){
  int size = q.size();
  vector<int> level;
  for(int i=0;i<size;i++){
    Node* node = q.front();
  q.pop();
  level.push_back(node->val);
  if(node->left!=NULL) q.push(node->left);
  if(node->right!=NULL) q.push(node->right);
}
ans.push_back(level);
}
return ans;}};

int main(){
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);

  solution solution;
  vector<vector<int>> result = solution.LevelOrder(root);
   cout << "Level Order Traversal:" << endl;
  for(const auto& level : result){
    for(int val : level){
      cout << val << " ";
    }
    cout<<endl;
  }
  return 0;
}
