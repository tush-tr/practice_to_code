/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let min = Number.MAX_SAFE_INTEGER;
    let mxProfit = Number.MIN_SAFE_INTEGER;
    prices.forEach((price)=>{
        min = Math.min(min,price);
        mxProfit = Math.max(mxProfit,price-min);
    })
    return mxProfit
};