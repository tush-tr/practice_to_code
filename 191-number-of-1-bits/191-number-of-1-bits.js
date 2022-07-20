/**
 * @param {number} n - a positive integer
 * @return {number}
 */
const countSetBit = (n)=>{
    let result = 0;
    while(n!=0){
        result++;
        n = n& (n-1);
    }
    return result;
}
var hammingWeight = function(n) {
    return countSetBit(n)
};