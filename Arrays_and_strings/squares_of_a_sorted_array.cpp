/*
 Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order.

 */

#include <iostream>
#include <vector>

class Solution {
public:
    static std::vector<int> sortedSquares(std::vector<int>& nums) {
        std::vector<int> ans;
        int right;
        for (right = 0; right < nums.size(); ++right) {
            if (nums[right] > 0)
                break;
        }
        int left = right - 1;
        while (left >= 0 && right < nums.size()) {
            if (abs(nums[left]) > abs(nums[right])) {
                ans.push_back(nums[right] * nums[right]);
                ++right;
            } else {
                ans.push_back(nums[left] * nums[left]);
                --left;
            }
        }

        while (left >= 0) {
            ans.push_back(nums[left] * nums[left]);
            --left;
        }

        while (right < nums.size()) {
            ans.push_back(nums[right] * nums[right]);
            ++right;
        }
        return ans;
    }
};

//int main() {
//    std::vector<int> vec = {};
//    auto ans = Solution::sortedSquares(vec);
//
//    for (auto& element : ans) {
//        std::cout << element << " ";
//
//    }
//}