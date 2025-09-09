#include <iostream>
#include <vector>
#include "task3.cpp"  // Include the implementation file to test its functions
#include "utils.cpp"  // Include the utils file for print function

// Test 1: Multiple occurrences
void test1() {
    int arr[] = {1, 2, 3, 2, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    vector<int> expected = {1, 3, 5};
    vector<int> result = findAllIndices(arr, size, key);
    cout << "Test 1 - Multiple occurrences: ";
    cout << (compareVectors(result, expected) ? "PASS" : "FAIL") << endl;
}

// Test 2: Key absent
void test2() {
    int arr[] = {1, 3, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    vector<int> expected = {};  // empty vector expected
    vector<int> result = findAllIndices(arr, size, key);
    cout << "Test 2 - Key absent: ";
    cout << (compareVectors(result, expected) ? "PASS" : "FAIL") << endl;
}

// Test 3: Empty array
void test3() {
    int* arr = nullptr;
    int size = 0;
    int key = 1;
    vector<int> expected = {};  // empty vector expected
    vector<int> result = findAllIndices(arr, size, key);
    cout << "Test 3 - Empty array: ";
    cout << (compareVectors(result, expected) ? "PASS" : "FAIL") << endl;
}

int main() {
    test1();
    test2();
    test3();
    return 0;
}
