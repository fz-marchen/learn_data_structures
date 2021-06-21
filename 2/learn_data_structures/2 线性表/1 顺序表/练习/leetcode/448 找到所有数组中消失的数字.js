/**
 * 
 * 给定一个范围在  1 ≤ a[i] ≤ n ( n = 数组大小 ) 的 整型数组，数组中的元素一些出现了两次，另一些只出现一次。
   找到所有在 [1, n] 范围之间没有出现在数组中的数字。
   您能在不使用额外空间且时间复杂度为O(n)的情况下完成这个任务吗? 你可以假定返回的数组不算在额外空间内。
 *
 * 示例:
   输入:
   [4,3,2,7,8,2,3,1]
   输出:
   [5,6]
 */

 // 哈希表
var findDisappearedNumbers1 = function(nums) {
    const obj = {}
    const arr = []


    for(let i = 0; i < nums.length; i++) {
        if(obj[nums[i]]) {
            obj[nums[i]] = obj[nums[i]]++
        } else {
            obj[nums[i]] = 1
        }
    }

    for(let i = 1; i <= nums.length; i++) {
        if(!obj[i]) {
            arr.push(i)
        }
    }
    return arr
};

// 原地哈希
var findDisappearedNumbers2 = function(nums) {
    const length = nums.length;
    if (!length) {
        return [];
    }

    nums.forEach(num => {
        // 将下标为 abs(num) - 1 的元素变成负数
        const absNum = Math.abs(num);
        if (nums[absNum - 1] > 0) {
            nums[absNum - 1] *= -1;
        }
    });

    const res = [];
    // 针对“数组下标”进行遍历
    for (let i = 1; i <= length; ++i) {
        // 如果下标 i-1 的元素是正数，说明整数 i 没出现过（要不然前面循环就变成负数了）
        if (nums[i - 1] > 0) {
            res.push(i);
        }
    }

    return res;
};

function test() {
    const arr = [4,3,2,7,8,2,3,1]
    const result = findDisappearedNumbers1(arr)

    console.log('result', result)
}

test()