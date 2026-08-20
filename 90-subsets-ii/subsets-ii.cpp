class Solution {
public:
    void solve(vector<int> &nums, int i, vector<int> &temp, vector<vector<int>> &res) {
    res.push_back(temp);
    if(i == nums.size()) {
        
        return;
    }
    for(int idx = i; idx < nums.size(); idx++) {
        if(idx > i && nums[idx] == nums[idx-1]) continue;
        temp.push_back(nums[idx]);
        solve(nums, idx+1, temp, res);
        temp.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int i =0;
    vector<int> temp;
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    solve(nums, i, temp, res);
    return res;
    }
};