//floor - the largest number inthe array smaller than or equal to target 
//ceil is the smallest number in an array which is greater than or equal to the target
//example-
//10|20|30|40|50|60|70|80|90|100  
//target = 25
//floor= 20
//ceiling = 30

#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
  int temp;
  for(int i =n-1;i>=0;i--){
    int didswap =0;
    for(int j=0;j<i;j++){
      if(arr[j]>arr[j+1])
      {
        temp = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        didswap=1;
      }
    }
    if(didswap==0) break;
  }
}

floor(int arr[],int n,int target){
  int low=0;
  int high=n-1;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==target) return arr[mid];
    else
    {
      if(arr[mid]<target) low=mid+1;
      else high=mid-1;
    }
    
  }
}