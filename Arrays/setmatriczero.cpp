//okay so in this we will need to create a matrix and then we will need to check if the element is zero or not and if it is zero then we will make the whole row and column zero
//brute force - we will iterate on the matrix and check for an element that has 0 but we will not mark the row and column as 0 as then it will iterate agin and end up marking the whole matrix as 0 so we will mark the row and column as -1 and then 
//better -  in the brute force we were going through each element but in this we will check from the strating element if there is a minimum of one 0 in te row or column and if there is one then that entire row and column will be zero so we sill mark them  and then we will checkj the unmarked row and column.
#include <iostream>
#include <vector>
using namespace std;
void setmatriczero(vector<vector<int>>& matrix){
  int m = matrix.size();
  int n = matrix[0].size();
  bool row0 = false,col0 = false;
  for(int i=0;i<m;i++)
    if (matrix[i][0]==0) col0=true;
  for(int j=0;j<n;j++)
    if (matrix[0][j]==0) row0=true;
    

for (int i = 1; i < m; i++) {
    for (int j = 1; j < n; j++) {
        if (matrix[i][j] == 0) {
            matrix[i][0] = 0;
            matrix[0][j] = 0;
        }
    }
}
for(int i = 1;i<m;i++){
  for(int j = 1; j< n; j++){
    if(matrix[i][0]==0 || matrix[0][j]==0){
      matrix[i][j]=0;
    }  
  }
}
if(row0){
  for(int j = 0; j<m; j++){
    matrix[0][j]=0;}
}
if(col0){
  for(int i = 0; i<n; i++){
    matrix[i][0]=0;}
}}
int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    // Read matrix input
    cout << "Enter matrix elements row-wise (separated by spaces):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Apply the algorithm
    setmatriczero(matrix);

    // Print the modified matrix
    cout << "\nModified matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}