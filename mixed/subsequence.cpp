#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[8] = {10, 9, 2, 5, 3, 7, 101, 18};
    int space[8];
    for(int i=0;i<8;i++){
        space[i] = 0;
    }
    int res = 0;
    for(int i=7;i>=0;i--){
        if(i==7){
            space[i] = arr[i];
        }
        if(arr[i]>=space[i+1]){
            space[i] = arr[i];
        }
        else{
            space[i] = space[i+1];
        }
    }
    for(int i=0;i<8;i++){
        cout<<space[i]<<" ";
    }
    cout<<endl;

}