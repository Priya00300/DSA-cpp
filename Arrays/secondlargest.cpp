//first we can find the largest an then write an if statement that the element should be smaller that the largest but grater than the rest

#include <iostream>
using namespace std;
void largest(int arr[],int n){
  int max=arr[0];
  for(int i=0;i<n;i++){
    if( arr[i]>max){
    max=arr[i];
  }}} 

    void secondlargest(int arr[],int n){
      int secondmax=-1;
         for(int i=0;i<n;i++){
           if(arr[i]>secondmax && arr[i]=!max){
             secondmax=arr[i];
           }
           return secondmax(arr,n);
           
         }
    }
int main()
{ int n;
  cout<<"enter the size of the array";
  cin>>n;
 int i;
 int arr[n];
 cout<< "enter the elements of the array";
 for(i=0;i<=n;i++){
   cin>>arr[i];
 }
  return 0;
}