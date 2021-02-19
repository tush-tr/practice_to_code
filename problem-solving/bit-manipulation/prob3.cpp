#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b){
    while(b!=0)
    {
        int carry = a&b;
        a = a^b;
        b = carry<<1;
    }
    return a;
}
int main(){
    cout<<sum(5,3)<<endl;

}