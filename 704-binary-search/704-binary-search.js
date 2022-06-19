/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
const binarySearch = (arr,searchEl)=>{
    let low = 0;
    let high = arr.length;
    while(low<=high){
        let mid = Math.floor((high+low)/2);
        if(arr[mid]===searchEl){
            return mid;
        }else if(arr[mid]>searchEl){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return -1;
}
var search = function(nums, target) {
    return binarySearch(nums,target)
    
};