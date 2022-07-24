#include<iostream>
using namespace std;
int devide(int a, int b){
	int count = 0;
	while(a>=b){
		a = a-b;
		count++;
	}
	return count;
	
}
int main() { 
  int a = 10, b = 3; 
  cout << devide(a, b) << "\n";   
  return 0; 
} 