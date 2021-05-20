/*
An array is monotonic if it is either monotone increasing or monotone decreasing.
An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j].  An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].
Return true if and only if the given array nums is monotonic.

Example 1:
Input: nums = [1,2,2,3]
Output: true

Example 2:
Input: nums = [6,5,4,4]
Output: true
*/

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int increase = 0, decrease = 0;
        int n = A.size();

        for (int i = 0; i < n - 1; i++) { //iterate through the array

            if (A[i] <= A[i + 1])
                increase++; // if the numbers are increasing

            if (A[i] >= A[i + 1])
                decrease++; // if the numbers are decreasing
        }
        return ((increase == n - 1 || decrease == n - 1) ? true : false); // if all numbers have either increased or decreased array is monotonic
    }
};
