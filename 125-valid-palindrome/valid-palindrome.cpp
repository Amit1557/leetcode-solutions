class Solution {
public:
bool check( vector<char>& p, int i){
        int n=p.size();
        if(i>=n/2){
            return true;
        }
        if(p[i]!=p[n-i-1]){
            return false;
        }
       return check(p,i+1);
    }
    bool isPalindrome(string s) {
        vector<char> p;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
            p.push_back(tolower(s[i]));
            }
        }
        return check(p,0);
    }
};


