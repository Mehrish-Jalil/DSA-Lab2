#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char temp[100];
    cout << "Enter a string: ";
    cin >> temp;
    int len = strlen(temp);
    // Dynamic allocation for the string
    char *str = new char[len + 1];
    strcpy(str, temp);
    // Reverse the string
    for (int i = 0; i < len / 2; i++) {
        char tempChar = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tempChar;
    }
    cout << "Reversed: " << str << endl;
    // Free memory
    delete[] str;
    return 0;
}