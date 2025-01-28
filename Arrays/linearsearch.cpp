//taking the nu,mber as variable checking if it exists is existes returning the num if not then then it will return -1
#include <iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return i;
    }}
    return -1;
  };

int main(){
  cout<<"enter the size of the array\n";
  int n;
  cin>>n;
  int arr[n];
  cout<<"enter the elements of the array\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"enter the element to be searched\n";
  int key;
  cin>>key;
  cout<<linearsearch(arr,n,key);
  return 0;
}