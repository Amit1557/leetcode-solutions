class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string taken;
        vector<string> nums;
        while(getline(ss,taken,' ')){
            if(taken!=""){
        nums.push_back(taken);}
    }
    return nums[nums.size()-1].size();}
};