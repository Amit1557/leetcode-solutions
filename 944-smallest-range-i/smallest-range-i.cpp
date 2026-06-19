class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {

        int mini = nums[0];
        int maxi = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < mini)
                mini = nums[i];
            if (nums[i] > maxi)
                maxi = nums[i];
        }
        int diff = maxi - mini;
        if (diff <= 2 * k)
            return 0;
        return diff - 2 * k;
    }
};