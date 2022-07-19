/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    let i = 0;
    nums.forEach((num)=>{
        if(num!==val){
            nums[i] = num;
            i++
        }
    })
    // for(let i=0;i<nums.length;i++){
    //     if(nums[i]!==val){
    //         nums[j] = nums[i];
    //         j++;
    //     }
    // }
    return i;
};