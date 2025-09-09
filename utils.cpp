#include <iostream>
#include <vector>
using namespace std;

// Helper to print vector content
void printIndices(const vector<int>& indices) {
    if (indices.empty()) {
        cout << "No occurrences found.";
    } else {
        for (int idx : indices) {
            cout << idx << " ";
        }
    }
    cout << endl;
}

bool compareVectors(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

void printModes(const vector<int> &modes) {
    if (modes.empty()) {
        cout << "None";
    } else {
        for (int val : modes) cout << val << " ";
    }
    cout << endl;
}
//Task 5
void printTriangle(const vector<vector<int>> &triangle) {
    for (const auto &row : triangle) {
        for (int val : row) cout << val << " ";
        cout << endl;
    }
}