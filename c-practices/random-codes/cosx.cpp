// cos x = 1 - pow(x,2)/fac(2)

#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}
int main(){
    int x,n;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of n: ";
    cin>>n;
    int cosx = 1;
    int a = 2;
    for(int i=2;i<=n;i++){
        if(i%2==0){
            cosx -= pow(x,a)/factorial(a);
        }
        else{
            cosx += pow(x,a)/factorial(a);
        }
        a +=2;
    }
    cout<<"Value of cos x: "<<cosx<<endl;
    return 0;
}


