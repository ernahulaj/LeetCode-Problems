/*
Given an array nums of non-negative integers, return an array consisting of all the even elements of nums, followed by all the odd elements of nums.
You may return any answer array that satisfies this condition.

Example 1:
Input: nums = [3,1,2,4]
Output: [2,4,3,1]
The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
*/

class Solution {
public:
vector<int> sortArrayByParity(vector<int>& A) {
    
    int index = 0; // because the first time we see an even element we need to make sure to put it at the front of the array
    for(int i = 0; i < A.size(); i++){
        if(A[i]%2 == 0 ){ //if element is even we swap the values
            int temp = A[index]; 
            A[index++] = A[i];
            A[i] = temp;
        }
        
    }
    return A;
}
};
