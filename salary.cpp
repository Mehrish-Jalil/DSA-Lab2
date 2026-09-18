#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the number of employees: ";
    cin >> size;
    // Dynamic memory allocation
    int *salArray = new int[size];
    // Input 
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> salArray[i];
    }
    // Increment formula
    for (int i = 0; i < size; i++) {
        salArray[i] = salArray[i] + salArray[i] / (i + 1);
    }
    // updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << salArray[i] << " ";
    }
    cout << endl;
    // Free allocated memory
    delete[] salArray;
    return 0;
}