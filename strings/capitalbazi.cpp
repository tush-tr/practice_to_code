#include<bits/stdc++.h> 
using namespace std;
int main(){
	string s;
	getline(cin,s);
	transform(s.begin(), s.end(), s.begin(), ::toupper); 
	for(int i=0;i<s.length();i++){
		if(isspace(s[i]))
		{
			cout<<endl;
			continue;
		}
		cout<<s[i];
	}

	return 0;
}