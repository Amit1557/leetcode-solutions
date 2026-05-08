class Solution {
public:
    int longestPalindrome(string s) {
         unordered_map<char, int> mp;

        
        for(char ch : s) {
            mp[ch]++;
        }

        int ans = 0;
        bool oddFound = false;

        for(auto it : mp) {
            int freq = it.second;

            if(freq % 2 == 0) {
                ans += freq;
            }
            else {
                ans += freq - 1; 
                oddFound = true;
            }
        }

       
        if(oddFound) ans++;

        return ans;
    }
};