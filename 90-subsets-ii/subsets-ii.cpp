class Solution {
public:
    set<vector<int>> ans;
    void subset(vector<int> &nums, int n, int indx, vector<int> temp){
        if(indx == n){
            sort(temp.begin(), temp.end());
            ans.insert(temp);
            return ;
        }
        subset(nums , n, indx+1, temp);
        temp.push_back(nums[indx]);
        subset(nums, n, indx+1, temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        subset(nums, nums.size(), 0, {});
        vector<vector<int>> temp(ans.begin(), ans.end());
                                    return temp;
    }
};