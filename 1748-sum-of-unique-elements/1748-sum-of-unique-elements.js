/**
 * @param {number[]} nums
 * @return {number}
 */
var sumOfUnique = function(nums) {
    let sum=0;
    nums.sort()
    for(let i=0;i<nums.length;i++){
    if(nums[i]===nums[i+1] || nums[i]===nums[i-1]){
        continue;
    }
    sum+=nums[i]
}
    return sum
};