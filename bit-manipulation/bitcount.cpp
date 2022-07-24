#include <iostream>
using namespace std;
int main() {
	int A = 3;
	int bits = 0;
	for(int i=1;i<=A;i++){
		int count = 0;
    while(i!=0){
        count++;
        i = i & (i-1);
    }
		bits += count;
	}
	cout<<bits<<endl;
}