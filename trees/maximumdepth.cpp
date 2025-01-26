//  1
// /  \ 
//2    3
//    /  \
//   4    6
//  /
// 5
//we know neither the height nor the width
//we will use recurence to find the width
//height should be
//1 +max(height(left),height(right))
///left and right will be 0 or 1 : 1 when there is an element and 0 when there is no element
//starting from the last element  1+max(0,0)
//starting from the second last element 1+max(1,0)
//for 6  1 + max(0,0)
//for 3 1 + max(2,1)
// for 1 1+max(1,3)
//for 2  1+max(0,0)
// 1 +max(1,3) =4 is the final answer
//code-

#include<iostream>
using namespace std;

struct Treenode{
int val;
Treenode *left;
Treenode *right;
Treenode(int val) : val(val), left(nullptr), right(nullptr) {}
};

int maxdepth(Treenode* root){
  if(root==nullptr) return 0;

  int leftdepth = maxdepth(root->left);
  int rightdepth = maxdepth(root->right);

  return 1+max(leftdepth,rightdepth);
};

int main(){
  Treenode* root = new Treenode(1);
  root->left = new Treenode(2);
  root->right = new Treenode(3);
  root->left->left = new Treenode(4);
  root->left->right = new Treenode(5);
  cout << "Maximum Depth: " << maxdepth(root);
  return 0;
}
  