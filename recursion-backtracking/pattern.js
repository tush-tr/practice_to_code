// const arr = [];
// const pattern = (n) => {
//   if (n > 0) {
//     arr.push(n);
//     pattern(n - 5);
//   }
//   arr.push(n);
// };
// pattern(16);
// console.log(arr);

class Solution {
  arr = [];
  solve(n) {
    if (n > 0) {
      this.arr.push(n);
      this.solve(n - 5);
    }
    this.arr.push(n);
  }
  pattern(n) {
    //code here
    this.solve(n);
    return this.arr;
  }
}

const sol = new Solution()
console.log(sol.pattern(16))
