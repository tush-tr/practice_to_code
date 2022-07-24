class Solution {
public:
  bool isPrime(int n) {
    // Corner case
    if (n <= 1)
      return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
      if (n % i == 0)
        return false;

    return true;
  }
  int countsetbits(int n) {
    int count = 0;
    while (n > 0) {
      count++;
      n = n & (n - 1);
    }
    return count;
  }
  int countPrimeSetBits(int L, int R) {
    int res = 0;
    for (int i = L; i <= R; i++) {
      int sb = countsetbits(i);
      if (isPrime(sb)) {
        res++;
      }
    }
    return res;
  }
};