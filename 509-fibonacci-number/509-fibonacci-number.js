/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
};
// var fib = function(n) {
//     let f = new Array(n+1).fill(-1);
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