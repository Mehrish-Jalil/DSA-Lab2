#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size); 
// TESTS 
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
void testAllSameValues() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
    cout << "testAllSameValues Passed" << endl;
}
void testMiddleUnsorted() {
    int arr[] = {1, 3, 2};
    assert(isSorted(arr, 3) == false);
    cout << "testMiddleUnsorted Passed" << endl;
}
// MAIN 
int main() {
    cout << "Running TDD Test Cases..." << endl;
    testMiddleUnsorted(); 
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllSameValues();
    cout << "All tests passed successfully!" << endl;
    return 0;
}