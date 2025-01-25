//follows -adjacent swaping 
//13|46|24|52|20|9
//0 | 1| 2| 3| 4|5
//n-6|n-5|n-4|n-3|n-2|n-1
//1st step 13 and 46 will compare>13|46|24|52|20|9
//2nd step 46 and 24 will >13|24|46|52|20|9
//3rd step 46 and 52 will >13|24|46|52|20|9
//4th step 46 and 20 will >13|24|46|20|52|9
//5th step 46 and 9 will >13|24|46|20|9|52
//here we observe that the max 52 is at the last
//13|24|20|46|9|52
//13|20|24|46|9|52
//13|20|24|9|46|52
//13|20|9|24|46|52
//13|9|20|24|46|52
//9|13|20|24|46|52
//done

#include<iostream>  
using namespace std;
void bubblesort(int arr[],int n){
  int temp;
  for(int i =n-1;i>=0;i--){
    int didswap=0;
    
    for(int j=0;j<=i-1;j++){
      if(arr[j]>arr[j+1]){
        temp = arr[j+1];
          arr[j+1]=arr[j];
          arr[j]=temp;
        didswap=1;
      }
    }
    if(didswap==0){
      break;
    }  
    //we can remove run as i havae put it here so that we can see how many tim es it loops and in the best case O(n) which is when the array is already sorted
    //worst case O(n^2)
  }
}
  }
}
    cout<<"runs\n";
  
    
  }}
int main()
{
  int n;
  cin >>n;
  int arr[n];
  for (int i =0; i<n;i++){
    cin >> arr[i];
  }
  bubblesort(arr,n);
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }

  return 0;


}
