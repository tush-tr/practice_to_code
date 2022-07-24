#include<iostream>
using namespace std;
int reversebits(int n){
    unsigned int b = 0;
    for(int i=0;i<32;i++){
        int k = n & 1; // get last set bit
        b <<=1;
        b |= k;
        n >>=1;
    }
    return b;
}
int main(){
    cout<<reversebits(4)<<endl;

    return 0;
}
// var reverseBits = function(n) {
//   var result = 0;
//   var count = 32;

//   while (count--) {
//     result *= 2;
//     result += n & 1;
//     n = n >> 1;
//   }
//   return result;
// };