const arr = [1, 2, 3, 4, 5];
arr.sort();
let mxSum = Number.MIN_SAFE_INTEGER;
let mnSum = Number.MAX_SAFE_INTEGER;
let maxSum = 0;
let minSum = 0;
for (let i = 1; i < arr.length; i++) {
  maxSum += arr[i];
}
for (let i = arr.length-2; i >= 0; i--) {
  minSum += arr[i];
}
console.log(minSum, maxSum);
