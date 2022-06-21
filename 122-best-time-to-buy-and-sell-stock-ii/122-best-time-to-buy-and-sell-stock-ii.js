/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let mxProfit = 0;
    prices.forEach((price,i)=>{
        if(price>prices[i-1]){
            mxProfit += (price-prices[i-1])
            
        }
    })
    return mxProfit;
};