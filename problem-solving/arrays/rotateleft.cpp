#include<bits/stdc++.h> 
#include <vector>
using namespace std;
vector<int> rotateLeft(int d, vector<int> arr) {
    for(int i=1;i<=d;++i){
        for(int j=0;j<(arr.size()-1);j++){
            swap(arr[j],arr[j+1]);
        }
    }
    return arr;
}
vector<int> rotateleft(vector<int> arr){
    int n = arr.size();
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i] 
    }
}
int main(){

}