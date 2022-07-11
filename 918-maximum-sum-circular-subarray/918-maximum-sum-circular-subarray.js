/**
 * @param {number[]} nums
 * @return {number}
 */

const kadane = (nums)=>{
    let currSum = 0;
    let maxSum = Number.MIN_SAFE_INTEGER;
    nums.forEach((num)=>{
        currSum += num;
        maxSum = Math.max(maxSum,currSum);
        if(currSum<0){
            currSum = 0;
        }
    })
    return maxSum;
}
var maxSubarraySumCircular = function(nums) {
    // TODO: get the total sum of the original array
    const totalSum = nums.reduce((a,b)=>(a+b));
    //  TODO: get the max subarray sum of nonWrapping elements
    const nonWrapSum = kadane(nums);
    if(nonWrapSum<0){
        return nonWrapSum;
    }
    // TODO: Get the sum of non-contributing elements
    const reverseSignArray = nums.map((num)=>(-(num)));
    // TODO:  Max Subarray sum = Total sum  of array - Sum of non-contributing elements
    const wrapSum = totalSum + kadane(reverseSignArray);
    return Math.max(nonWrapSum,wrapSum);
};