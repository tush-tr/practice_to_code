/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    const aux = new Array(prices.length).fill(0);
  const n = prices.length;
  for (let i = n - 1; i >= 0; i--) {
    if (i == n - 1) {
      aux[i] = prices[i];
    }
    if (prices[i] >= aux[i + 1]) {
      aux[i] = prices[i];
    }
    if(prices[i]<aux[i+1]){
        aux[i]=aux[i+1]
    }
  }
  let mxProfit = 0;
  prices.forEach((price, i) => {
    if (aux[i] - price > mxProfit) {
      mxProfit = aux[i] - price;
    }
  });
  return mxProfit;
    
};