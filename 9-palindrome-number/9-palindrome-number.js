/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    const xstr = x.toString().split("").reverse().join("")
    if(xstr===x.toString()){
        return true;
    }
    return false;
    
};