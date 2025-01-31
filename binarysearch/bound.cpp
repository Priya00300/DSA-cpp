//okay so the key difference between lower bound and upper bound is that iun loer we are searching for any element that is just a bit bigger that the target or equal to the target 
//condition for lower - if(arr[mid]>=target)
//while for the upper bound it should be muuch larger than the target so the loop will run the maximum number of time to find when is it largest
//condition for this is 
//if(arr[mid]> target)

#include <iostream>
using namespace std;

void sort(int arr[], int n){
  int temp;

for(int i=n-1;i>0;i--){
  int didswap=0;
  for(int j=0;j<i;j++){
    if(arr[j]>arr[j+1]){
      temp = arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
      didswap=1;
    }
    
    
  }
  if(didswap==0) break;
}
  
}
int lowerbound(int arr[],int n,int target){
  int ans;
  int low=0;
  int high=n-1;
  for(int i=0;i<n;i++){
    int mid = (low+(high-low))/2;
    if(arr[mid]>=target)
    {
      ans=mid;
      high=mid-1;
      
    }
    else{
      low=mid+1;
    }
    
  }
return low;
}
int upperbound(int arr[],int n,int target){
  int ans;
  int low=0;
  int high=n-1;
  for(int i=0;i<n;i++){
    int mid = (low+(high-low))/2;
    if(arr[mid]>target)
    {
      ans=mid;
      high=mid-1;

    }
    else{
      low=mid+1;
    }

  }
return low;
}
int main(){
  int n;
  cout<< "enter the size of the array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"enter the elements of the array"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,n);
  cout<<"the sorted array is:"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  int target;
  cout<<"enter the target"<<endl;
  cin>>target;
  cout<<"the lower bound is "<<lowerbound(arr,n,target)<<endl;
  cout<<"the upper bound is "<<upperbound(arr,n,target)<<endl;
  return 0;
}
