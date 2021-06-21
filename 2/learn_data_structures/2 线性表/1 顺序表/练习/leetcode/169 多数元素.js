/**
 * 给定一个大小为 n 的数组，找到其中的多数元素。多数元素是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。
 * 你可以假设数组是非空的，并且给定的数组总是存在多数元素。
 * 示例 1:
   输入: [3,2,3]
   输出: 3
 * 示例 2:
   输入: [2,2,1,1,1,2,2]
   输出: 2
 */

var majorityElement1 = function(nums) {
    if(nums.length == 1) return nums[0];
    for(let i = 0,len = nums.length;i<len;i++){
        let count = 1;
        for(let j = i+1;j<len;j++){
            if(nums[i] == nums[j]) count++;
            if(count > len/2) return nums[i];
        }
    }
};

// hash
var majorityElement3 = function(nums) {
    let result = 0
    let map = new Map()
    for(let i = 0; i < nums.length; i++) {
        if(map.has(nums[i])) {
            map.set(nums[i], map.get(nums[i]) + 1)
        } else {
            map.set(nums[i], 1)
            
        }
    }
    for(let [key, value] of map) {
        if((nums.length / value) < 2) {
            result = key
        }
    }
    return result
};

 // Boyer-Moore 投票算法
 var majorityElement2 = function(nums) {
    let candidate = []
    let cnt = 0
    for(let i=0;i<nums.length;i++){
        if(cnt === 0){
            candidate = nums[i]
        }
        cnt += (nums[i] == candidate)? 1:-1
    }
    return candidate

};

function test() {
    const arr = [2,2,1,1,1,2,2,1,1,1]
    const result = majorityElement(arr)

    console.log('result', result)
}

test()