#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;

    // Validate input
    while (n <= 0) {
        cout << "Please enter a positive integer: ";
        cin >> n;
    }

    // Print the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}