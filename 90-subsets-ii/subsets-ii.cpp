class Solution {
public:
    void solve(vector<int> &nums, int i, vector<int> &temp, vector<vector<int>> &res) {
        res.push_back(temp);
        for (int idx = i; idx < (int)nums.size(); idx++) {
            if (idx > i && nums[idx] == nums[idx - 1]) continue;
            temp.push_back(nums[idx]);
            solve(nums, idx + 1, temp, res);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp;
        temp.reserve(nums.size());          // avoid repeated reallocation
        vector<vector<int>> res;
        res.reserve(1 << nums.size());      // exact upper bound, no vector doubling overhead
        solve(nums, 0, temp, res);
        return res;
    }
};