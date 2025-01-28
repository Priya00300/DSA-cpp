#include<iostream>
using namespace std;
void sort(int arr[],int n){
  int temp;
  for(int i = n-1;i<n;i++){
    int didswap=0;
    for(int j=0;j<=i-1;j++){
      if(arr[j]>arr[j+1])
        
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        didswap = 1;
    }
    if(didswap==0){
      break;
    }
    
  }
  
}

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
  sort(arr,n);
  cout<<"the sorted array is";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
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
