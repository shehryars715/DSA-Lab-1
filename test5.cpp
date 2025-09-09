#include <iostream>
#include <vector>
#include "task5.cpp"  
#include "utils.cpp"


void test0() {
    cout << "n = 0:" << endl;
    auto result = generatePascalsTriangle(0);
    printTriangle(result);
    cout << endl;
}

void test1() {
    cout << "n = 1:" << endl;
    auto result = generatePascalsTriangle(1);
    printTriangle(result);
    cout << endl;
}

void test5() {
    cout << "n = 5:" << endl;
    auto result = generatePascalsTriangle(5);
    printTriangle(result);

    // Verify row 5 → {1, 4, 6, 4, 1}
    cout << "Row 5 verification: ";
    for (int val : result[4]) cout << val << " ";  
    cout << endl << endl;
}


int main() {
    test0();
    test1();
    test5();
    return 0;
}