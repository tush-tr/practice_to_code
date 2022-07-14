/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let temp = new Set(nums)
    if(temp.size<nums.length){
        return true
    }
    return false
};