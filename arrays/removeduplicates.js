const removeDuplicates = (nums)=>{
    let k = 0;
    for(let i=0; i<nums.length; i++){
        if(nums[i] != nums[i+1]){
            nums[k++] = nums[i];
            console.log(nums)
        }
    }
    return k;
}
console.log(removeDuplicates([1,1,2]))