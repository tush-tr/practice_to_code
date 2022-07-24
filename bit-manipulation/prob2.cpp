#include<bits/stdc++.h>
using namespace std;
int subsets(int arr[],int n){
    int result = 0;
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                result += arr[j];
            }
        }
    }
    return result;
}
int main(){
    int arr[] = {1,2,3,4,5};
    cout<<subsets(arr,5)<<endl;

}