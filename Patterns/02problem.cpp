// Write a program that takes an integer n as input and prints an n × n pattern of uppercase English letters starting from 'A' in each row.

// Example:
// Input:
// n : 4

// Output:
// A B C D  
// A B C D  
// A B C D  
// A B C D  






#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "n :";
    cin  >> n;
    
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1 ; j <=n; j++)
        {
           cout << ch << " ";
           ch = ch + 1;
        }
        
        cout << "\n";
    }
}
