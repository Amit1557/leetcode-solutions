class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str=strs[0];
        for(int i=1;i<strs.size();i++){
            string sb="";
            int left=0;
            int right=0;
            while(left<str.size() && right<strs[i].size()){
                if(str[left]==strs[i][right]){
                    sb=sb+str[left];
                    left++;
                    right++;
                }
                else break;
            }
            str=sb;
        }
        return str;
    }
};