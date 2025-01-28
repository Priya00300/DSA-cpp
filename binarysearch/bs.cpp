#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
  int low =0;
  int high =n-1;
  while(low<=high){
    int mid = (low+(high-low))/2;
    if(arr[mid] ==key){
      return mid;
    }
    else if(arr[mid]<key){
      low= mid+1;
    }
    else{
      high = mid-1;
    }
    
  }
  return -1;
}

int main(){
  int n;
  cout<< "enter the size of the array";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      
    }
  int key;
  cout<<"enter the key";  
  cin>>key;
  int index = binarysearch(arr,n,key);
  if(index!=-1){
    cout<<"element found at index"<<index;
  }
  else{
    cout<<"element not found";
  }
return 0;
}
