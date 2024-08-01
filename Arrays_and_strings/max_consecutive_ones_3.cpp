//
// Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
//
//
//
//Example 1:
//
//Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
//Output: 6
//Explanation: [1,1,1,0,0,1,1,1,1,1,1]
//Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
//Example 2:
//
//Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
//Output: 10
//Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
//Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
//
//
#include <iostream>
#include <vector>

class Solution {
public:
    static int longestOnes(std::vector<int>& nums, int k) {
        int left = 0, curr = 0, ans = 0;
        for (int right = 0; right < nums.size(); ++right) {
            if (nums[right] == 0) {
                ++curr;
            }

            while (curr > k) {
                if (nums[left] == 0) {
                    --curr;
                }
                ++left;
            }
            ans = std::max(ans, right - left + 1);
        }
        return ans;
    }
};
