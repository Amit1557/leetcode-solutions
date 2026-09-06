class Solution {
public:
int count(vector<int>& nums, int k){
    int n=nums.size();
    int l=0;
    int r=0;
    int sum=0;
    map<int,int> mpp;
    while(r<n){
        mpp[nums[r]]++;
        while(mpp.size()>k){
            mpp[nums[l]]--;
            if(mpp[nums[l]]==0) mpp.erase(nums[l]);
            l++;
        }
        if(mpp.size()<=k){
            sum+=r-l+1;
        }
        r++;
    }
    return sum;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return count(nums,k)-count(nums,k-1);
    }
};