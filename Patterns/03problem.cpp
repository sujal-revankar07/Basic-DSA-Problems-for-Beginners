// Write a program that takes an integer n as input and prints an n × n grid of sequential numbers starting from 1, increasing from left to right, and continuing to the next row.

// Example:
// Input:
// n : 4


// Output:
//   1  2  3  4  
//   5  6  7  8  
//   9 10 11 12  
//  13 14 15 16  






#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "n :";
    cin  >> n;
    int num = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1 ; j <=n; j++)
        {
            num = num + 1;
            cout << "  " <<num;
        }
        cout << "\n";
    }
}
