#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8] = {5, 4, 1, 4, 3, 5, 1, 2};
    int res = 0;
    for (int i = 0; i < 8; i++)
    {
        res = res ^ arr[i];
    }
    cout<<res<<endl;
    int rightmost = res & ~(res-1);
    cout<<rightmost<<endl;
}