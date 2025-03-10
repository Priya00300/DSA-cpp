//to find all elements are there in a row n
//Element k=Element k−1 × n−k/k
//n: 1-based row number.
//k: 0-based index of the current element in the row.
#include<iostream>
#include<vector>
using namespace std;
vector<int> generaterow(int n){
  vector<int> row;
  long long element = 1;
  row.push_back(element);
  for(int k = 1;k<n;k++){
    element = element*(n-k)/k;
    row.push_back(element);
  }
  return row;
}
int main()
{
    int n;
    cin >> n;
    vector<int> row = generaterow(n);
    for (int num : row) { // Print each element
        cout << num << " ";
    }
    return 0;
}
