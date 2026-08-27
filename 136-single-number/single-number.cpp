class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xo=0;
        for(auto it:nums){
            xo=xo^it;
        }
        return xo;
    }
};