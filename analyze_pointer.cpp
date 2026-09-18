#include <iostream>
using namespace std;
// Function
void analyze_pointer(int *ptr) {
    cout << "Memory Location: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}
int main() {
    // Stack allocation
    int iValue = 42;
    cout << "--- Stack Variable ---" << endl;
    analyze_pointer(&iValue);
    // Heap allocation
    int *heapValue = new int(100);
    cout << "\n--- Heap Variable ---" << endl;
    analyze_pointer(heapValue);
    // Free memory
    delete heapValue;
    return 0;
}