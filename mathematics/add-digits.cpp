#include<iostream>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        string digits = to_string(num);
        if(digits.size()==1){
            return num;
        }
        int result = 0;
        while(num>0){
            result+= num%10;
            num /= 10;
        }
        return addDigits(result);
    }
};
int main(){
    Solution s;
    int result = s.addDigits(120);
    cout<<result<<endl;
}