//13|46|24|52|20|9
//0 | 1| 2| 3| 4|5
//n-6|n-5|n-4|n-3|n-2|n-1
//n=6
//first step the smallest will come forward>9||46|24|52|20|13
//second step the smallest will come forward>9|13|24|52|20|46
//third step the smallest will come forward>9|13|20|52|46|24
//fourth step the smallest will come forward>9|13|20|24|46|52
//fifth step the smallest will come forward>9|13|20|24|46|52
//done
//algorithm- get the smallest ellement and swap it 
//we swapped the index of the smallest element with the index of the first element and then -1 from the size of the array
//how the swapping happened -
// index 0 to minimum index->n-1
//then 1 to minimum index->n-1
//then 2 to minimum index->n-2
//then 3 to minimum index->n-2
//and done
//pseudo code - it happens till n-2
//for(int i=0;i<n-2;i++)
//and there has to be an intrnal loop to search for smallest // for (j=i;j<=n-1;j++)

#include<iostream>  
using namespace std;
void selectionsort(int arr[],int n){
  int minindex,temp;
  for(int i=0;i<n-1;i++)
    {
      minindex=i;
      for(int j=i;j<n-1;j++){
        if(arr[j]<arr[minindex]){
          minindex=j;
      }
    }
  temp = arr[minindex];
  arr[minindex]=arr[i];
  arr[i]=temp;
  
}}
int main()
{
  int n;
  cin >>n;
  int arr[n];
  for (int i =0; i<n;i++){
    cin >> arr[i];
  }
  selectionsort(arr,n);
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  
  return 0;
  
  
}
