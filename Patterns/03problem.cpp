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
