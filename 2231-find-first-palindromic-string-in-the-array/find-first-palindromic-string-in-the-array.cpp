class Solution {
public:
    bool ispalindrome(string word){
        int i=0;
        int j=word.size()-1;
        while(i<j){
            if(word[i]!=word[j]) return false; 
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string j="";
        for(int i=0;i<words.size();i++){
            if(ispalindrome(words[i])){
                j=words[i];
                return j;
            }
        }
        return j;
    }
};