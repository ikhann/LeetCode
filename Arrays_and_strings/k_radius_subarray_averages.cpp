#include <iostream>
#include <vector>

using namespace std;

//You are given a 0-indexed array nums of n integers, and an integer k.
//
//The k-radius average for a subarray of nums centered at some index i with the radius k is the average of all elements in nums between the indices i - k and i + k (inclusive). If there are less than k elements before or after the index i, then the k-radius average is -1.
//
//Build and return an array avgs of length n where avgs[i] is the k-radius average for the subarray centered at index i.
//
//The average of x elements is the sum of the x elements divided by x, using integer division. The integer division truncates toward zero, which means losing its fractional part.
//
//For example, the average of four elements 2, 3, 1, and 5 is (2 + 3 + 1 + 5) / 4 = 11 / 4 = 2.75, which truncates to 2.


class Solution {
public:
    static vector<int> getAverages(vector<int>& nums, int k) {
        vector<int64_t> sum_prefix;
        sum_prefix.push_back(nums.front());
        int64_t delimiter = 2 * k + 1;
        for (size_t i = 1; i < nums.size(); ++i) {
            sum_prefix.push_back(sum_prefix.back() + nums[i]);
        }

        for (size_t i = 0; i < nums.size(); ++i) {
            if (k > i || k > nums.size() - i - 1) {
                nums[i] = -1;
            } else {
                auto rhs = (i - k < 1) ? 0 : sum_prefix[i - k - 1];
                nums[i] = static_cast<int>((sum_prefix[i + k] - rhs) / delimiter);
            }

        }
        return nums;
    }
};