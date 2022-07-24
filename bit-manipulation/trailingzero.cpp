#include <iostream>
using namespace std;
int countTrailingZero(int x)
{
  int count = 0;
  while ((x & 1) == 0)
  {
    x = x >> 1;
    count++;
  }
  return count;
}

int main()
{
  int A;
  cin >> A;
  // int count = 0;
  cout<<countTrailingZero(A)<<endl;
  // while (A != 0)
  // {
  //   int check = A & 1;
  //   cout << check << endl;
  //   if (check == 0)
  //   {
  //     count++;
  //   }
  //   else
  //   {
  //     break;
  //   }
  //   A = A >> 1;
  // }
  // cout << count << endl;
}