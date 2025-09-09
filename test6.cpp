#include <iostream>
#include <vector>
#include <string>
#include "task6.cpp"
using namespace std;

bool compare_vectors(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

void run_test(const string& test_name, const vector<int>& input, const vector<int>& expected) {
    vector<int> result = find_mode(input);
    if (compare_vectors(result, expected)) {
        cout << test_name << ": PASSED " << endl;
    } else {
        cout << test_name << ": FAILED  (Expected: ";
        for (int e : expected) cout << e << " ";
        cout << ", Got: ";
        for (int r : result) cout << r << " ";
        cout << ")" << endl;
    }
}

int main() {
    run_test("Unique mode", {1, 2, 2, 3, 4}, {2});
    run_test("Multiple modes", {1, 1, 2, 2, 3}, {1, 2});
    run_test("Empty array", {}, {});
    run_test("All same elements", {5, 5, 5, 5}, {5});
}
