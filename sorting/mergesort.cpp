//g++ -std=c++17 -o output selectionsort.cpp
//merge sort- normally the time complexity is O(N2)
//but in this the complexity is O(N) thsts why it //iss preferred
//divide and merge
// 3|1|2|4|1|5|2|6|4
//there are 9 elements we will divide them in two parts 5 by 4
//3|1|2|4|!
//5|2|6|4
//we will try to divide the first part again 
//3|1|2|
//4|1|
//we will divie the other one also 
//3|1
//2
//3
//1
//now it cannot be divided further 
//now we will merge them but in a sorted way
//1|3
//1|2|3
//1|4
//1|1|2|3|4
//now for this -//5|2|6|4
//5|2
//5
//2
//6|4
//6
//4
//2|5
//4|6
//2|4|5|6
//1|1|2|2|3|4|4|5|6-SORTED
//here there were two pointer at each beginning of the array
//psseudocode-
//we are dividing the array in two parts
//;ets take - 
//3|2|4|1|3
//0|1|2|3|4<--index
//low|....|high
//we have to use recurssion and back tracking
//we will find a middle index low+high/2
//so that we can divide it in two parts
//mergesort(arr,low,high){ mid =(low+high)/2)
//mergesort(arr,low,mid)
//}

#include<iostream>  
using namespace std;
void mergesort(int arr[],int n){
  

}
int main()
{
  int n;
  cin >>n;
  int arr[n];
  for (int i =0; i<n;i++){
    cin >> arr[i];
  }
  mergesort(arr,n);
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }

  return 0;
}
