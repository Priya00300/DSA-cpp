//it takes an element and puts it at the corret position
//9|14|15|12|6|8|13
//9 is at the correct place
//14 is at the correct place
//15 is at the correct place
//12 is NOT at the correct place
//9|12|14|15|6|8|13
//12 is at the correct place
//14 is at the correct place
//15 is at the correct place
//6 is NOT at the correct place
//9|6|12|14|15|8|13
//8 is NOT at the correct place
//9|6|8|12|14|15|13
//13 is not at the correct place
//9|6|8|12|13|14|15
//done
//algorithm-
//we are runningg from 0 to n-1
//fori=0;i<=n-1;i++)
//for(j>0&&arr[j]<arr[j-1])

#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int j=i;
   while(j > 0 && arr[j-1]>arr[j]){
      int temp = arr[j -1];
      arr[j-1]=arr[j];
      arr[j]=temp;
     j--;
    }
  }
}
int main()
  {
    int n;
    cin >>n;
    int arr[n];
    for (int i =0; i<n;i++){
      cin >> arr[i];
    }
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
      cout << arr[i] << " ";
    }

    return 0;


  }

