class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> nums;

        long long ans = 1;

        for(int j = 0; j <= rowIndex; j++) {
            nums.push_back(ans);

            ans = ans * (rowIndex - j) / (j + 1);
        }

        return nums;
    }
};