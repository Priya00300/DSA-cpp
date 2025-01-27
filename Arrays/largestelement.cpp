//we can either sort it and then give out the last
//or else we can iterate by assuming that first element is the largest

#include<iostream>
using namespace std;
int largest(int arr[],int n){
  int max=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  return max;
}
int main()
{
  int n,arr[n],i;
  cout<<"enter the size of the array\n";
  cin>>n;
  cout<<"enter the elements of the array\n";
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  int max=largest(arr,n);
  cout<<"the largest element is "<<max;
  return 0;
}