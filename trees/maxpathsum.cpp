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
int maxpathsum
}