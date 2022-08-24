/**
 * @param {number} n
 * @return {number}
 */
// var fib = function(n) {
//     if(n==0 || n==1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// };
// let f = new Array(10).fill(-1);
// var fib = function(n) {
//     if(n==0 || n==1){
//         f[n] = n;
//         return n;
//     }
//     else{
//         if(f[n-2]==-1){
//             f[n-2] = fib(n-2);
//         }
//         if(f[n-1]==-1){
//             f[n-1] = fib(n-1);
//         }
//         return f[n-1]+f[n-2];
//     }
// };
var fib = function(n,memo={}){
    if (n in memo) return memo[n];

  if (n <= 1) return n;
  memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
  return memo[n];
}