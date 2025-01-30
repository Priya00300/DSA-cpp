//stack and queue data structure
//in real lif ewe always use it in the browser
//it is one d it remembers what is the position for the next and not he previous 
//it is a linear data structure
//representation-
//int n =2;
//int y =&n;
//cout<<y;
//here we use &n to define the position or address for the n ewlement ---pointer to n
// self defined data type
// struct node{
//int data;
 // Node* next;
//Node(data1,next1) {
 // data =data1;
  //next = next1;
//}
//Node n = Node(1,nullptr);
//Node* y = &n;

#include<iostream>
#include<vector>
using namespace std;

struct node{
int data;
node* next;
node(int val,node* next1) : data(val), next(next1) {}
};

int main(){
  vector<int> v = {1,2,3,4,5};
  node* head = new node(v[1],nullptr);
  node* current =head;
  for(size_t i=1;i<v.size();i++){
    current -> next = new node(v[i]);
    current = current->next
  }
  cout << "Linked List: ";
  current = head;
  while (current != nullptr) {
      cout << current->data << " ";
      current = current->next;
  }
  cout << endl;
  return 0;
}
