function isValidSubsequence(array, sequence) {
  // Write your code here.
  for (let i = 0; i < sequence.length; i++) {
    let match = false;
    for (let j = 0; j < array.length; j++) {
      if (sequence[i] === array[j]) {
        match = true;
      }
    }
    if(!match){
        return false;
    }
  }
  return true;
}

const testCase1 = {
  array: [5, 1, 22, 25, 6, -1, 8, 10],
  sequence: [1, 6, -1, 10],
};

console.log(isValidSubsequence(testCase1.array, testCase1.sequence));
