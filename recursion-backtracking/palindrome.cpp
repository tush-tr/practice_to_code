#include <bits/stdc++.h>
using namespace std; 

bool isPalindrome(string str){
    int j =0;
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]!=str[j]){
            return false;
        }
        j++;
    }
    return true;
}

bool isPalindromer(string str,int l,int h){
    if(l<h){
        if(str[l]!=str[h]){
            return false;
        }
        return isPalindromer(str,l+1,h-1);
    }
    return true;
}

int main(){
    string str = "aba";
    cout<<isPalindromer(str,0,str.length()-1)<<endl;

}