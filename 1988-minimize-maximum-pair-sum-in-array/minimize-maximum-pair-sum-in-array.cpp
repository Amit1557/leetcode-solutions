class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max1=0;
        int ans=0;
        for(int i=0;i<nums.size()/2;i++){
            max1=nums[i]+nums[nums.size()-i-1];
            ans=max(ans,max1);
        }
        return ans;
          }
};