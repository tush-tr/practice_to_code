#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countsetbits(int n){
        int count=0;
        while(n>0){
            count++;       
            n = n & (n-1);
        }
        return count;
        
    }
    int hammingDistance(int x, int y) {
        int res = x^y;
        return countsetbits(res);
        
    }
};
int main(){
    Solution sol;
    int x = 1,y=4;
    cout<<sol.hammingDistance(x,y)<<endl;
}