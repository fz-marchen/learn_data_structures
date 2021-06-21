/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

// 时间复杂度：o(n^2) 空间复杂度：o(1)
// var twoSum = function(nums, target) {
//     for(let i = 0; i < nums.length; i++) {
//         for(let j = i + 1; j < nums.length; j++) {
//             if(nums[i] + nums[j] == target) {
//                 return [i, j]
//             }
//         }
//     }
//     return []
// };

// 时间复杂度：o(n) 空间复杂度：o(n)
var twoSum = function(nums, target) {
    let cache = {}
    for(let i = 0; i < nums.length; i++) {
        const value = target - nums[i]
        if(cache[value] !== undefined) {
            return [cache[value], i] 
        } else {
            cache[nums[i]] = i
        }
    }
    return []
};

const result1 = twoSum([1,2,3,4,5,6,7,8,9], 10)
console.log('result1', result1)
const result2 = twoSum([2, 7, 11, 15], 9)
console.log('result2', result2)
const result3 = twoSum([2, 7, 11, 15], 100)
console.log('result3', result3)