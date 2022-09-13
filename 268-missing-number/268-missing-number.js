/**
 * @param {number[]} nums
 * @return {number}
 */

var bruteForce = function(nums){
    let n = nums.length;
    nums.sort();
    console.log(nums,n)
    let ans;
    for(let i=0;i<=n;i++){
        let flag = false;
        nums.forEach((num)=>{
            if(i==num){
                flag = true;
            }
        })
        if(!flag){
            ans = i;
        }
    }
    return ans;
}
const bitmanipulation = function(nums){
    let temp = 0;
    let i=0;
    for(i=0;i<nums.length;i++){
        temp = temp ^ i ^ nums[i];
    }
    return temp ^ i
}
var missingNumber = function(nums) {
    // summation approach
    const sum = nums.reduce((a,b)=>(a+b));
    const s = nums.length * (nums.length+1)/2
    return s-sum;
};