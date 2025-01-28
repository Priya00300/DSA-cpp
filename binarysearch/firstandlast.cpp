//okay so in this we have to find out when does our target  first comes in an array and when for the last time
//we can start a linear iteration to first find the element and store its index
//at the emnd we have to give a pair of both the index it occcurs at 
//2|4|6|8|8|8|11|13
//we have to find for 8
//first ocuurance is at 3 an dlast at 5
//code-
//first =-1;last =-1
//for(i=0;i<n;i++){
//if(arr[i]==target)
//{
//if(first==-1)
//  first =i
//    last =i;
//}}

#include<iostream>
#include <vector>
using namespace std;
void firstandlast(const vector<int>& arr,int n,int target){
  int first= -1;
  int last = -1;
  for(int i=0;i<n;i++){ 
    if(arr[i]==target){
        if(first==-1){
                 first =i;
                 }
           last =i;
          }}

  cout << "First Occurrence: " << first << endl;
  cout << "Last Occurrence: " << last << endl;

}
int main(){
  int n;
  cout<< "enter the size of the array";
  cin >>n;
  vector<int> arr(n);
  cout<< "enter the elements of the array";
  for (int i =0; i<n;i++){
    cin >> arr[i];
  }
  int target;
  cout<< "enter the target";
  cin >> target;
  firstandlast(arr,n,target);
  return 0;
}