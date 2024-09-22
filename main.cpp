#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask user for the number of rows in the top half of the diamond
    cout << "Enter the number of rows for the diamond: ";
    cin >> n;

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}