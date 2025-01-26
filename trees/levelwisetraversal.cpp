#include<iostream>
#innclude<vector>
using namespace std;

struct Node{
int val;
Node* left;
Node* right;
Node(int val) : val(val), left(nullptr),
}

class solution{
public:
vector<vector<int>> LevelOrder(Node* root)
 vector<vector<int>> ans;
 if(root==nullptr)
    return 0;

while(!q.empty){
  int size = q.size();
  vector<int> level;
  for(int i=0;i<size;i++)
    Node* node = q.front();
  q.pop;
  level.push_back(node->val);
  if(node->left!=NULL)=q.push(node->left);
  if(node->right!=NULL)=q.push(node->right);
}
ans.push_back(level);
}

int main(){
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);

  Solution solution;
  vector<vector<int>> result = solution.LevelOrder(root);
  return 0;
}
