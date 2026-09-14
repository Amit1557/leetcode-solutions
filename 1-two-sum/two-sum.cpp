class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //  for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         if (nums[j] == target - nums[i]) {
        //             return {i, j};
        //         }
        //     }
        // }
      
        // return {};

 int n = nums.size();

unordered_map<int, int> mpp;

for (int i = 0; i < n; i++) {
    mpp[nums[i]] = i;
}

for (int i = 0; i < n; i++) {
    int m = target - nums[i];

    if (mpp.find(m) != mpp.end() && mpp[m] != i) {
        return {i, mpp[m]};
    }
}

return {};
    }
};