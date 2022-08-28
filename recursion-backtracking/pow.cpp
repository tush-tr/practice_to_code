#include <bits/stdc++.h>
using namespace std;

int powOptimiized(int a, int b){
    if(b==1){
        return a;
    }
    if((b&1)==0){
        return powOptimiized(a*a,b/2);
    }
    return a*powOptimiized(a*a,(b-1)/2);
}



int solution(int a, int b){
    if(b<0){
        return 1/powOptimiized(a,abs(b));
    }
    return powOptimiized(a,b);
}

int pow(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    return pow(a, b - 1) * a;
}
int main()
{
    cout << solution(6, -2) << endl;
}