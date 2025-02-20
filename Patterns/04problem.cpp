// Write a program that takes an integer n as input and prints a right-angled triangle pattern using '*'. The triangle should have n rows, where each row contains an increasing number of stars.

// Example:
// Input:
// n : 5

// Output:

//  *  
//  * *  
//  * * *  
//  * * * *  
//  * * * * *  




#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "n :";
    cin  >> n;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0 ; j <i+1; j++)
        {
            
            cout << " * " ;
            
        }
        cout << "\n";
    }
}
