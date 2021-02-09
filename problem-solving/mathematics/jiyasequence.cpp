#include<iostream>
using namespace std;
#define int long long int
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int multi = 1;
		while(n--){
			int dg;
			cin>>dg;
			multi *= dg;
		}
		int ld = multi%10;

		if(ld==2 || ld==3 || ld==5){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}