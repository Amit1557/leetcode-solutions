class Solution {
public:
    int digit(int num){
        int count=0;
        while(num>0){
            count++;
            num/=10;
        }
        return count;
    }
    bool canAliceWin(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            if(digit(nums[i])==1) sum1+=nums[i];
            else sum2+=nums[i];
        }
        if(sum1==sum2) return false;
        else return true;
    }
};