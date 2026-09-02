class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int r=0;
        int l=0;
        int maxl=0;
        int zeroes=0;

        while(r<n){
            if(nums[r]==0){
                zeroes++; 
            }

            if(zeroes>k){
                if(nums[l]==0)
                    zeroes--;
                l=l+1;
            }

            maxl=max(maxl,r-l+1);
            r++;
        }

        return maxl;
    }
};