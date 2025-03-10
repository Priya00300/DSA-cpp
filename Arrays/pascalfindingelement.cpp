//pascal triangle -
//      1
//    1   1
//   1   2   1
//  1   3   3   1
// 1   4   6   4   1
// now we need to find the element at the (n,r position)  in this we are  goven the row number nad the column number r
//7C2= 7!/(2!*5!)
//7C2 = 7*6 *(5!/2!*5!))
//7C2 = 7*6/2
//10C3 = 10*9*8/3*2*1
//is NCR r is 3 then it will iterate 3 times 
//in the formula n is sthe number of rows and r is the number of columns
#include<iostream>
using namespace std;

int pascalelement(int row,int col){
  row--;
  col--;
  long long result = 1;
  for(int i = 0;i<col;i++){
    result= result*(row-i);
    result = result/(i+1);
  }
  return  result;
  
}
int main(){
  int n,r;
  cin >> n >> r;
  cout<< pascalelement(n,r);
  
}
