/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfThree = function(n) {
    if(n<1){
        return false;
    }
    if(n%3==0){
        return isPowerOfThree(n/3);
    }
    return n==1;
};