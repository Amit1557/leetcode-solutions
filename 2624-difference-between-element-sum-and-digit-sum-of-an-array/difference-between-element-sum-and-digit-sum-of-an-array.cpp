class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int ssum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(nums[i]!=0){
            int x = nums[i]%10;
            ssum+=x;
            nums[i]/=10;
            }
        }
        return abs(sum-ssum);
    }
};