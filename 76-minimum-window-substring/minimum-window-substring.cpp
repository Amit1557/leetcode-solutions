class Solution {
public:
    string minWindow(string s, string t) {
        // Step 1: Create a frequency map for ASCII characters (size 128 or 256)
        vector<int> mpp(128, 0);
        for (char c : t) {
            mpp[c]++;
        }
        
        int n=s.size();
        int l=0,r=0;
        
        
        int min_len=INT_MAX; 
        int start_idx=-1;
        
        
        int rc = t.size();
        
        
        while (r<n) {
            
            if(mpp[s[r]]>0){
                rc--;
            }
            mpp[s[r]]--;
            while (rc==0) {
                if (r-l+1<min_len) {
                    min_len=r-l+1;
                    start_idx=l;
                }
                
             
                mpp[s[l]]++;
                if (mpp[s[l]]>0) {
                    rc++;
                }
                
                l++; 
            }
            
            r++; 
        }
        
        return start_idx==-1?"":s.substr(start_idx,min_len);
    }
};
