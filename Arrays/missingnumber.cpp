#include <iostream>
using namespace std;
int missingnumber(int arr[],int n){
  int sum=0;
  int totalsum=n*(n+1)/2;
  
  for(i=0;i<n;++){
    sum+=arr[i];
    
  }
  return totalsum-sum;

  
}

int main()
{
  int n;
  cout<<"enter the size of the array";
  cin>>n;
  int arr[n];
  cout<<"enter the elements of the array";
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  int missingnumber = missingnumber(arr,n);
  cout<<"the missing number is"<<missingnumber;
  return 0;
}
