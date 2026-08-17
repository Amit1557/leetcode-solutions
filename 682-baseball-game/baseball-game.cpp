class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>v;
        long long ans=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="D"){
                ans+=2*v[v.size()-1];
                v.push_back(2*v[v.size()-1]);
            }
            else if(operations[i]=="C"){
                ans-=v[v.size()-1];
                v.pop_back();
            }
            else if(operations[i]=="+"){
                ans+=v[v.size()-1]+v[v.size()-2];
                v.push_back(v[v.size()-1]+v[v.size()-2]);
            }
            else {
                v.push_back(stoi(operations[i]));
                ans+=stoi(operations[i]);
            }
        }
        return ans;
    }
};