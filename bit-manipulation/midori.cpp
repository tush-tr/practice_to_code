#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long int setbit(long long n,long long int pos){
        n = n | (1<<pos);
        return n;
    }
    long long int leftShops(long long int i, long long int L){
        // code here
        long long int s = 1;
        for(long long int j=1;j<L;j++){
        s = setbit(s,j);
        }
        return (s+1)-i;
    }
};
int main(){
    long long int i,L;
    cin>>i>>L;
    Solution ob;
    cout<<ob.leftShops(i,L)<<endl;
}