class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string taken;
        string lastword;
        while(getline(ss,taken,' ')){
            if(taken!=""){
        lastword=taken;
        }
    }
    return lastword.size();}
};