#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "task7.cpp"
using namespace std;

bool compare(const Matrix& A, const Matrix& B) {
    if (A.size() != B.size()) return false;
    for (int i = 0; i < A.size(); i++)
        for (int j = 0; j < A.size(); j++)
            if (A[i][j] != B[i][j]) return false;
    return true;
}

void run_test(const string& test_name, const Matrix& A, const Matrix& B) {
    Matrix strassen_result = strassen(A, B);
    Matrix naive_result = naiveMultiply(A, B);

    if (compare(strassen_result, naive_result)) {
        cout << test_name << ": PASSED ✅" << endl;
    } else {
        cout << test_name << ": FAILED ❌" << endl;
    }
}

Matrix randomMatrix(int n, int min_val = -5, int max_val = 5) {
    Matrix M(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            M[i][j] = min_val + rand() % (max_val - min_val + 1);
    return M;
}

int main() {
    srand(time(0));

    // Test 1: 2x2
    Matrix A1 = {{1, 2}, {3, 4}};
    Matrix B1 = {{5, 6}, {7, 8}};
    run_test("Test 1 - 2x2", A1, B1);

    // Test 2: 4x4
    Matrix A2 = {{1, 2, 3, 4},
                 {5, 6, 7, 8},
                 {9, 10, 11, 12},
                 {13, 14, 15, 16}};
    Matrix B2 = {{16, 15, 14, 13},
                 {12, 11, 10, 9},
                 {8, 7, 6, 5},
                 {4, 3, 2, 1}};
    run_test("Test 2 - 4x4", A2, B2);

    // Test 3: Random matrices 8x8
    Matrix A3 = randomMatrix(8);
    Matrix B3 = randomMatrix(8);
    run_test("Test 3 - Random 8x8", A3, B3);

    return 0;
}
