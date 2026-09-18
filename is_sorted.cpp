#include <iostream>
#include <cassert>
using namespace std;
// PART 1: test cases
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
    cout << "testSortedArray Passed" << endl;
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
    cout << "testUnsortedArray Passed" << endl;
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
    cout << "testDuplicateValues Passed" << endl;
}

void testSingleElement() {
    int arr[] = {5};
    assert(isSorted(arr, 1) == true); 
    cout << "testSingleElement Passed" << endl;
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
    cout << "testDescendingArray Passed" << endl;
}

void testNegativeValues() {
    int arr[] = {-5, -2, 0, 3, 4};
    assert(isSorted(arr, 5) == true);
    cout << "testNegativeValues Passed" << endl;
}
// My test cases
void testAllSameValues() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
    cout << "testAllSameValues Passed" << endl;
}

void testEmptyArray() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true);
    cout << "testEmptyArray Passed" << endl;
}

bool isSorted(const int* arr, const int size) {
}

int main() {
    cout << "Running TDD Test Cases..." << endl;

    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement(); 
    testDescendingArray();
    testNegativeValues();

    cout << "All tests passed successfully!" << endl;
    return 0;
}
