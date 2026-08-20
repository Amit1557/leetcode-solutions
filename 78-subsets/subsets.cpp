class Solution {
public:
    vector<vector<int>> ans;
    void subset(vector<int> &nums, int n, int indx, vector<int> temp){
        if(indx == n){
            ans.push_back(temp);
            return ;
        }
        subset(nums , n, indx+1, temp);
        temp.push_back(nums[indx]);
        subset(nums, n, indx+1, temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        subset(nums, nums.size(), 0, {});
        return ans;
    }
};