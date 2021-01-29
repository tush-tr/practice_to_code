#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    int result = 1;
    while (a>b)
    {
        result++;
        a = a - b;
        
    }
    cout<<result<<endl;
}