#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllIndices(const int arr[], int size, int key) {
    vector<int> indices;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}
