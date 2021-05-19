//Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

/*
Example 1:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Example 2:
Input: nums = [0,1]
Output: [[0,1],[1,0]]

Example 3:
Input: nums = [1]
Output: [[1]]
*/

class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> result;

		if (nums.size() == 1)     // when the vector only has one element
			return { nums }; 

		for (int i = 0; i < nums.size(); i++) {
			vector<int> vec(nums.begin(), nums.end());
			vec.erase(vec.begin() + i);  // points the iterator to the element with index i and deletes it to get a subvector
			auto res = permute(vec);     // recursion of function


			for (int j = 0; j < res.size(); j++) {
				vector<int> v = res[j];
				v.insert(v.begin(), nums[i]); // adds the deleted elements to the resulting vectors
				result.push_back(v); // adds the permutations to the final vector - the result which is to be printed
			}
		}
		return result;
	}
};
