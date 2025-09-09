#include <iostream>
#include <vector>
using namespace std;

// Function to generate Pascal's Triangle up to n rows
vector<vector<int>> generatePascalsTriangle(int n) {
    vector<vector<int>> triangle;
    if (n <= 0) return triangle; // Edge case: no rows

    for (int i = 0; i < n; i++) {
        vector<int> row(i + 1, 1); // initialize row with 1s
        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);
    }
    return triangle;
}

// Utility function to print Pascal's Triangle
void printTriangle(const vector<vector<int>> &triangle) {
    for (const auto &row : triangle) {
        for (int val : row) cout << val << " ";
        cout << endl;
    }
}

