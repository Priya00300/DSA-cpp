#include <iostream>
#include <vector>
using namespace std;

// Define the function BEFORE main()
vector<vector<int>> generatePascalTriangle(int numRows) {
    vector<vector<int>> res;
    for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = res[i - 1][j - 1] + res[i - 1][j];
        }
        res.push_back(row);
    }
    return res; // Ensure this is inside the function
}

int main() {
    int n = 5;
    vector<vector<int>> triangle = generatePascalTriangle(n);
    cout << "First 5 rows:\n";
    for (auto row : triangle) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }
    return 0;
}