#include <iostream>
#include <string>
#include "task4.cpp"  
using namespace std;

// Test Cases
void test1() {
    string text = "hello world";
    string pattern = "hello";
    cout << "Test 1 - Pattern at Beginning: " << findSubstring(text, pattern) << endl;
}

void test2() {
    string text = "Nust is good";
    string pattern = "good";
    cout << "Test 2 - Pattern at End: " << findSubstring(text, pattern) << endl;
}

void test3() {
    string text = "abcdef";
    string pattern = "gh";
    cout << "Test 3 - Pattern Not Present: " << findSubstring(text, pattern) << endl;
}

void test4() {
    string text = "anything";
    string pattern = "";
    cout << "Test 4 - Empty Pattern: " << findSubstring(text, pattern) << endl;
}


int main() {
    test1();
    test2();
    test3();
    test4();
    return 0;
}