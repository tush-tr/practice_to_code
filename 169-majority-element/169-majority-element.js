/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let max = nums.length/2;
    let res;
    nums.forEach((e)=>{
        let count = 0;
        nums.forEach((r)=>{
            if(e==r){
                count++;
            }

        })
        if(count >= max){
            max = count;
            res = e;
        }
    })
    return res;
};