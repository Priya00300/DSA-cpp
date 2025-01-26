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
}
  