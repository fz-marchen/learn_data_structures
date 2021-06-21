

/**
 * 给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。
 * 如果你最多只允许完成一笔交易（即买入和卖出一支股票一次），设计一个算法来计算你所能获取的最大利润。
 * 注意：你不能在买入股票前卖出股票。
 * 
 * 示例 1:
 * 输入: [7,1,5,3,6,4]
 * 输出: 5
 * 解释: 在第 2 天（股票价格 = 1）的时候买入，在第 5 天（股票价格 = 6）的时候卖出，最大利润 = 6-1 = 5 。
     注意利润不能是 7-1 = 6, 因为卖出价格需要大于买入价格；同时，你不能在买入前卖出股票。
 * 示例 2:
 * 输入: [7,6,4,3,1]
 * 输出: 0
 * 解释: 在这种情况下, 没有交易完成, 所以最大利润为 0。
 */
var maxProfit1 = function(prices) {
    let max = prices[1] - prices[0]
    for(let i = 0; i < prices.length; i++) {
        for(let j = i + 1; j < prices.length; j++) {
            let dis = prices[j] - prices[i]
            if(dis > max) {
                max = dis
            }
        }
    }
    if(max < 0) max = 0
    return max
};

var maxProfit2 = function(prices) {
    let min = prices[0]
    let max = 0
    for(let i = 1; i < prices.length; i++) {
        min = Math.min(min, prices[i])
        max = Math.max(max, prices[i] - min)
    }
    return max
};

function test(name) {
    const arr1 = [7,1,5,3,6,4]
    const result1 = maxProfit2(arr1)
    console.log(name + " result1", result1)

    const arr2 = [7,6,4,3,1]
    const result2 = maxProfit2(arr2)
    console.log(name + " result2", result2)
    
}

test("暴力破解")