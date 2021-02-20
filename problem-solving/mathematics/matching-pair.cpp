/* Given a set of numbers from 1 to N,
    each number is exactly present twice so there are N pairs.In the worst -
        case scenario,
    how many numbers X should be picked and removed from the set until we find a
        matching pair
    ?
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N = 1;
  int arr[2 * N];
  for (int i = 0; i < N; i++) {
    arr[i] = i + 1;
  }
  int a = 1;
  for (int i = N; i < 2 * N; i++) {
    arr[i] = a;
    a++;
  }
  // for(int i=0;i<2*N;i++){
  //     cout<<arr[i]<<" ";
  // }
  int sum = 1;
  for (int i = 1; i < 2 * N; i++) {
    sum++;
    if (arr[0] == arr[i]) {
      break;
    }
  }
  cout << sum;
  cout << endl;
}