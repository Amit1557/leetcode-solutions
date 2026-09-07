class Solution {
public:
int count(vector<int>& nums, int goal){
    if(goal<0) return 0;
     int r=0;
        int l=0;
        int n=nums.size();
        long long sum=0;
        long long cnt=0;
        while(r<n){
            sum+=nums[r]%2;
            while(sum>goal){
                sum-=nums[l]%2;
                l++;
            }
            if(sum<=goal){
            cnt+=r-l+1;}
                r++;
            
        }
    
    return cnt;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
         if(k<0) return 0;
       return count(nums,k)-count(nums,k-1);
    }
};