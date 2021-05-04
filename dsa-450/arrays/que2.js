const findMax = (arr)=>{
    return arr.reduce((a,b)=>{
        return Math.max(a,b)
    })
}

const findMin = (arr)=>{
    return arr.reduce((a,b)=>{
        return Math.min(a,b)
    })
}

let arr = [1,345,232,65573,2535,351,234,25,42,35,242]
console.log(findMax(arr))
console.log(findMin(arr))