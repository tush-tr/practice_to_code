#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        printPattern(n - 5);
    }
    cout << n << endl;
}

int main()
{
    printPattern(16);
}