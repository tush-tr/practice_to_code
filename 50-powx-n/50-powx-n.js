/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function(x, n) { 
    if(n<0){
        return 1/pow(x,Math.abs(n))
    }
    return pow(x,n)
};
const pow = (x,n)=>{
    if(n==0){
        return 1;
    }
    if((n&1)==0){
        return pow(x*x,n/2);
    }
    return x*pow(x*x,(n-1)/2);
}