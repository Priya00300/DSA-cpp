#include <iostream>
using namespace std;
int missingnumber(int arr[],int n){
  int sum=0;
  int totalsum=n*(n+1)/2;
  
  for(int i=0;i<n-1;i++){
    sum+=arr[i];
    
  }
  return totalsum-sum;

  
}

int main()
{
  int n;
  cout<<"enter the size of the array";
  cin>>n;
  int arr[n-1];
  cout<<"enter the elements of the array";
  for(int i=0;i<n-1;i++)
    {
      cin>>arr[i];
    }
  int missingnum = missingnumber(arr,n);
  cout<<"the missing number is"<<missingnum<<endl;
  return 0;
}
