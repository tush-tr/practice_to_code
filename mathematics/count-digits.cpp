#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 12;
    int count = 0;
    int num = N;
    while (N > 0)
    {
        int digit = N%10;
        cout<<num%digit<<endl;
        if (num%digit == 0 && digit != 0)
        {
            cout<<N<<endl;
            count++;
        }
        cout<<N<<endl;
        N = N / 10;
    }
    cout<<count<<endl;
}
