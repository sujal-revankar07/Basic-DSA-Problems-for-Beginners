// Question 01:
// Write a program that takes an integer n as input and prints a pattern where each row contains numbers from 1 to n and repeats for n rows.
// Example:
// Input:
// 4

// Output:
// 1234  
// 1234  
// 1234  
// 1234  

// CODE -->

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "n :";
    cin  >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1 ; j <=n; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}
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