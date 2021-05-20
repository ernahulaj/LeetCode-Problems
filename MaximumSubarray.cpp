/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Example 2:
Input: nums = [1]
Output: 1
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0]; // since the array is going to be non-empty, the 1st value will always exist so we intialize the maxSub to its value
        int currentSum = 0;

        for (int i = 0; i < nums.size(); i++) { // iterate through the array
            if (currentSum < 0)
                currentSum = 0; // if the sum is at any point negtive, we reset it back to 0 and start over because that cannot be the maxSubArray
            currentSum += nums[i]; // add the number to the currentSum
            maxSub = max(maxSub, currentSum); // the max will either be the value we first initialized it to, or the computed sum
        }
        return maxSub;
    }
};
