#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string s2 = s;
	for(int i=0;i<s.length()/2;i++){
		char temp = s[i];
		s[i] = s[s.length()-i-1];
		s[s.length()-i-1] = temp;
	}
	if(s2 == s){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}