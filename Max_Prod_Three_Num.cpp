/*
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

Example 1:
Input: nums = [1,2,3]
Output: 6

Example 2:
Input: nums = [1,2,3,4]
Output: 24

Example 3:
Input: nums = [-1,-2,-3]
Output: -6
*/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int min1 = INT_MAX, min2 = INT_MAX;
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;

        for (int n : nums) {
            if (n <= min1) {
                min2 = min1;
                min1 = n;
            }
            else if (n <= min2)
                min2 = n;

            if (n >= max1) {
                max3 = max2;
                max2 = max1;
                max1 = n;
            }
            else if (n >= max2) {
                max3 = max2;
                max2 = n;
            }
            else if (n >= max3)
                max3 = n;
        }
        return max(min1 * min2 * max1, max1 * max2 * max3);
    }
};
