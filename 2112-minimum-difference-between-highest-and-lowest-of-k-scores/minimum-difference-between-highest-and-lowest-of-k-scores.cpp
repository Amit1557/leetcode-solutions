class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1) return 0;
        sort(nums.begin(), nums.end());
        int min1=INT_MAX;
        for(int i=k-1;i<nums.size();i++){
            min1=min(min1,nums[i]-nums[i-k+1]);
        }
        return min1;
    }
};