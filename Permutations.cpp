class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> result;

		if (nums.size() == 1)
			return { nums };

		for (int i = 0; i < nums.size(); i++) {
			vector<int> vec(nums.begin(), nums.end());
			vec.erase(vec.begin() + i);
			auto res = permute(vec);


			for (int j = 0; j < res.size(); j++) {
				vector<int> v = res[j];
				v.insert(v.begin(), nums[i]);
				result.push_back(v);
			}
		}
		return result;
	}
};