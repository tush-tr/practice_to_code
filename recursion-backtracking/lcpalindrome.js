const str = "A man, a plan, a canal: Panama";

// const replaced = str.toLowerCase().replace(/[^a-z0-9]/gi, "");
// console.log(replaced);

// const isPalin = (s, l, h) => {
//   if (l < h) {
//     if (s[l] !== s[h]) {
//       return false;
//     }
//     return isPalin(s, l + 1, h - 1);
//   }
//   return true;
// };
// console.log(isPalin(replaced,0,replaced.length-1))

var isPalindrome = function (s) {
  const replaced = s.toLowerCase().replace(/[^a-z0-9]/gi, "");
  return isPalin(replaced, 0, s.length - 1);
};

const isPalin = (s, l, h) => {
  if (l < h) {
    if (s[l] !== s[h]) {
      return false;
    }
    return isPalin(s, l + 1, h - 1);
  }
  return true;
};
console.log(isPalindrome("A man, a plan, a canal: Panama"));
