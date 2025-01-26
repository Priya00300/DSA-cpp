//in this we will be using two functions first maxpathsum will be the main function inside of which we wil be calling globalmax and initialzing it to INT_MIN and then we will be updating it through a helper function called maxgain which will calculat which has the max sum for their values and then we will be updating the globalmax
//code -

#include<iostream>
#include<climits>
using namespace std;

struct Node{
int data;
Node* left;
Node* right;
Node(int val) : data(val), left(nullptr), right(nullptr) {}
}
class solution {
public:
int maxpathsum(Node* root){
  int globalmax = INT_MIN;
  int maxgain(Node* root,int &globalmax);
  retrun globalmax;
}
private:
int maxgain(Node* root,int &globalmax){
  if(root==nullptr) return 0;

  int leftmaxx = max(maxgain(root->left,globalmax));
  int rightmaxx = max(maxgain(root->right,globalmax));
  int currentpathsum = root->data + leftmaxx + rightmaxx;
  globalmax = max(globalmax,currentpathsum);
  return node->data +max(leftmaxx,rightmaxx);
  
}

};
int main(){
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  cout << "Maximum Path Sum: " << maxpathsum(root);
  return 0;
}