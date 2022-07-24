#include<iostream>
using namespace std;
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
        

    }
    for(int i=0;i<10;i++){
        if(a[i]>=42){
            continue;
        }
        cout<<a[i]<<endl;
    }

    return 0;
}