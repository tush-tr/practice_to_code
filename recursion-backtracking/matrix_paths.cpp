#include <bits/stdc++.h>
using namespace std;
int count(int m,int n){
    if(m==1 || n==1){
        return 1;
    }
    return count(m-1,n)+count(m,n-1);
}

int main()
{
    cout<<count(3,7)<<endl;
    
}