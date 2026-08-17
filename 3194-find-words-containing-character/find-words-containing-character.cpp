class Solution {
public:
bool find(string & word,char it){
    for(int i=0;i<word.size();i++){
        if(word[i]==it){
            return true;
        }
    }
    return false;
}
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        for(int i=0;i<words.size();i++){
            if(find(words[i],x)) v.push_back(i);
        }
        return v;
    }
};