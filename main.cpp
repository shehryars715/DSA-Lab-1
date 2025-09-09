#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {

    vector<int> arr1 = {1, 3, 7, 3, 5, 3};
    vector<int> result1 = findIndices(arr1, 3);
    cout << "Indices of 3: ";
    for (int idx : result1) cout << idx << " ";
    cout << endl;

    vector<int> arr2 = {10, 20, 30, 40};
    vector<int> result2 = findIndices(arr2, 25);
    cout << "Indices of 25: ";
    if (result2.empty()) cout << "Not found";
    else for (int idx : result2) cout << idx << " ";
    cout << endl;

    vector<int> arr3 = {};
    vector<int> result3 = findIndices(arr3, 5);
    cout << "Indices of 5 in empty array: ";
    if (result3.empty()) cout << "Not found";
    else for (int idx : result3) cout << idx << " ";
    cout << endl;

    return 0;
}
