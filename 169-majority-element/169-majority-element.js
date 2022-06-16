/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let ansIndex = 0;
    let count = 1;
    for(let i=1;i<nums.length;i++){
        if(nums[i]==nums[ansIndex]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            ansIndex = i;
            count = 1;
        }
    }
    return nums[ansIndex]
};