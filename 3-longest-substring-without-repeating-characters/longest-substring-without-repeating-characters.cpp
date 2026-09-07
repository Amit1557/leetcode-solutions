class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0;
        int l=0;
        int maxl=0;
        int n=s.size();
      vector<int> hash(256,-1);
        int maxlen=0;
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            maxl=r-l+1;
            maxlen=max(maxlen,maxl);
            hash[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};