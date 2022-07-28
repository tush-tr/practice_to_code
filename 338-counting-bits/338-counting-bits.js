/**
 * @param {number} n
 * @return {number[]}
 */
const countSetBits = function(n){
    let ans = 0;
    while(n!=0){
        ans++;
        n = n & (n-1)
    }
    return ans;
}
var countBits = function(n) {
    const answer = [];
    for(let i=0;i<=n;i++){
        answer.push(countSetBits(i))
    }
    return answer;
};