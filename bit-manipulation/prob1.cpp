#include <bits/stdc++.h>
using namespace std;
int countsetbits(int n){
    // n & (n-1) will clear rightmost set bit
    int result = 0;
    while(n>0){
        result++;
        n = n& (n-1);
    }
    return result;
}
int main() {
	//code
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int result = countsetbits(N);
	    cout<<result<<endl;
	}
	return 0;
}