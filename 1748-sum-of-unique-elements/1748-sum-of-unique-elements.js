/**
 * @param {number[]} nums
 * @return {number}
 */
var sumOfUnique = function(nums) {
    const idx = {}
nums.forEach((el)=>{
    idx[el]=0;
})
let sum=0;
nums.forEach((el)=>{
    idx[el]++;
})
Object.keys(idx).forEach((el)=>{
    if(idx[el]===1){
        sum = sum+parseInt(el);
    }
})
    return sum
    
};