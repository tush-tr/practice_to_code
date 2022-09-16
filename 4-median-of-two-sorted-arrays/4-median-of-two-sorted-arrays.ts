function findMedianSortedArrays(nums1: number[], nums2: number[]): number {
    const merged = [...nums1,...nums2];
    merged.sort((n1,n2)=>n1-n2);
    const half = Math.floor(merged.length/2);
    if(merged.length&1){
        return merged[half];
    }
    return (merged[half-1]+merged[half])/2.0;
};