class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]!=0){
                                // left = left+1; // IF I INITALIXE LEFT WITH -1;
                swap(nums[left],nums[right]);
                left = left+1;
            }
        }
    }
};