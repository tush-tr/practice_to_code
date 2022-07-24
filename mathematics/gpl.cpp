#include<bits/stdc++.h>
using namespace std;
int main(){
    // int binary-digit = '1' - '0';
    string s = "1010";
    long long p2 = 1;
    long long result = 0;
    for(int i=s.size()-1;i>=0;--i){
        int bd = s[i] - '0';
        result += bd * p2;
        p2 *= 2;
    }
    cout<<result<<endl;
}