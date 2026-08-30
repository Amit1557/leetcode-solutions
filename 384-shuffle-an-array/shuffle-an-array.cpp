class Solution {
public:
    vector<int> nums;

    Solution(vector<int>& nums) {
        this->nums = nums;
    }

    vector<int> reset() {
        return nums;
    }

    vector<int> shuffle() {
        vector<int> ans = nums;

        for(int i=0;i<ans.size();i++){
            int j = rand() % ans.size();
            swap(ans[i],ans[j]);
        }

        return ans;
    }
};