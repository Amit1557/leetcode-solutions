class Solution {
public:
    void solve(vector<int> &nums, int i, int temp[], int &count, vector<vector<int>> &res) {
        res.emplace_back(temp, temp + count);      // build result vector directly, no extra copy step
        for (int idx = i; idx < (int)nums.size(); idx++) {
            if (idx > i && nums[idx] == nums[idx - 1]) continue;
            temp[count++] = nums[idx];              // stack array, no heap alloc
            solve(nums, idx + 1, temp, count, res);
            count--;                                // backtrack
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int temp[10];        // constraint: nums.length <= 10
        int count = 0;
        vector<vector<int>> res;
        res.reserve(1 << nums.size());
        solve(nums, 0, temp, count, res);
        return res;
    }
};