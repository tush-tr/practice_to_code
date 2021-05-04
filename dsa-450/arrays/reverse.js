const reverseArray = (arr)=>{
    let res = [];
    for(let i = arr.length-1;i>=0;i--){
        res.push(arr[i])
    }
    return res;
}

let arr = [1,2,3,4,5]
console.log(reverseArray(arr))