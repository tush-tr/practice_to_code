#include<iostream>
using namespace std;
int reverse(int A) {
    if(A<(-INT_MIN)){
        return 0;
    }
    int reverse = 0;
    int sign=1;
    if(A<0){
        A = -A;
        sign = -1;
    }
    while(A>0){
        int ld = A%10;
         if (reverse > (INT_MAX / 10) || (reverse == (INT_MAX / 10) && ld > (INT_MAX % 10))) {
            return 0;
        }
        reverse = reverse*10 + ld;
        A /= 10;
    }
    return sign*reverse;
}
int main(){
    cout<<reverse(145)<<endl;

}