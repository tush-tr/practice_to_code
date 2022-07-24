/**
 * @param {number} n
 * @return {number}
 */
const factorial = (n) => {
  let fac = 1;
  for (let i = 1; i <= n; i++) {
    fac *= i;
  }
  return fac;
};
const getTrailingZero = (n) => {
  let ans = 0;
  while (n !== 0) {
    let lastbit = n & 1;
    if (lastbit === 0) {
        console.log(lastbit,n)
      ans++;
    } else {
      break;
    }
    n = n >> 1;
  }
  return ans;
};
var trailingZeroes = function (n) {
  const fac = factorial(n);
  console.log(fac);
  return getTrailingZero(fac);
};
console.log(trailingZeroes(3));
