/** 
 * 给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
 * 
 * 示例:
 * 输入: [-2,1,-3,4,-1,2,1,-5,4]
 * 输出: 6
 * 解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。
*/

// 暴力破解
const maxSubArray1 = function(nums) {
    let max = Number.MIN_SAFE_INTEGER
    for(let i = 0;i < nums.length; i++){
        let sum = 0
        for(let j = i;j < nums.length; j++){
            sum += nums[j]
            if(sum > max){
                max = sum
            }
        }
    }
    return max
};

const maxSubArray2 = function(nums) {
    let max = nums[0]
    let sum = nums[0]
    for(let i = 1;i < nums.length; i++){
        if (sum > 0) {
            sum += nums[i]
        } else {
            sum = nums[i]
        }
        if(sum > max) {
            max = sum
        }
    }
    return max
};



function testMaxSubArray(type) {
    const methodMap = {
        1: {
            title: '暴力破解',
            fn: maxSubArray1
        },
        2: {
            title: '优化算法',
            fn: maxSubArray2
        }
    }
    const fn = methodMap[type].fn
    const title = methodMap[type].title
    const arr1 = [-2,1,-3,4,-1,2,1,-5,4]

    const result1 = fn(arr1)
    console.log(title + " result1", result1)
    
}


testMaxSubArray(1)


testMaxSubArray(2)
