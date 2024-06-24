#include <iostream>
#include <vector>
/*
 * Write a function that reverses a string. The input string is given as an array of characters s.
 * You must do this by modifying the input array in-place with O(1) extra memory.
 * Example 1:
    Input: s = ["h","e","l","l","o"]
    Output: ["o","l","l","e","h"]
 * Example 2:
    Input: s = ["H","a","n","n","a","h"]
    Output: ["h","a","n","n","a","H"]

 * Constraints:
    1 <= s.length <= 105
    s[i] is a printable ascii character.
*/

class Solution {
public:
    static void reverseString(std::vector<char>& s) {
        std::size_t first = 0;
        std::size_t last = s.size() - 1;

        while (first < last) {
            std::swap(s[first], s[last]);
            ++first;
            --last;
        }
    }
};

//int main() {
//    std::vector<char> vec = {'h', 'e', 'l', 'l', 'o'};
//    Solution::reverseString(vec);
//    for (const auto& ch: vec) {
//        std::cout << ch << " ";
//
//    }
//    return 0;
//}

