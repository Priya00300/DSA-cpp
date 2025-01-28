//we have to solv the problem in the givne array only
//lets see how we can roptate it by one place 
//if we hyave to push the first index at the end then we will need to adjacent swap from the starting so that the first element goes to the loast
//temp = arr[o ]
//for(int i =1;i<n;i++)){
//{ arr[i-1]=arr[i];}
//}
//O(N)-space 
#include<iostream>
using namespace std;
void rotate(int arr[],int n){
  int temp = arr[0];
  for(int i =1;i<n;i++){
    arr[i-1]=arr[i];
    
  }
  arr[n-1]=temp;
}
int main(){
  cout<< "enter the size of the array";
  int n,i;
  cin >> n;
  int arr[n];
  cout << "enter the elements of the array";
  for(i=0;i<n;i++){
    cin >> arr[i];
  }
  rotate(arr,n);
  for(i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  return 0;
  
}