#include <vector>
#include <map>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int, int> cache;
       vector<int> result(2, -1);

        for(int i = 0; i < nums.size(); i++) {
            int value = target - nums[i];
            if(cache.count(value) > 0) {
                result[0] = cache[value];
                result[1] = i;
                return result;
            }
            cache[nums[i]] = i;
        }
       return result;
    };
};

void test1() {
    vector<int> array = {2,7,11,15};
    int target = 9;
    Solution s = Solution();
    vector<int> r = s.twoSum(array, target);
    cout << "[";
    for(vector<int>::iterator it = r.begin(); it <= r.end()-1; it++){  //iterator迭代器输入输出
        cout << (*it) << ",";
    }
    cout << "]";
}

int  main()
{
    test1();
    return 0;
}