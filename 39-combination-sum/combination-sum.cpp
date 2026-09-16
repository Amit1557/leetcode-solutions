class Solution {
public:
vector<vector<int>> find(int ind , vector<int>&  candidates , int target , vector<vector<int>> & ans , vector<int> & ds,int sum){
    if(ind==candidates.size()){
        if(target==sum){
            ans.push_back(ds);
        }
        return ans;
    }
    if(candidates[ind]+sum<=target){
    ds.push_back(candidates[ind]);
    sum+=candidates[ind];
    find(ind, candidates , target , ans , ds , sum);
    sum-=candidates[ind];
    ds.pop_back();
    }
    find(ind+1, candidates , target , ans , ds , sum);
    return ans;
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
      return find(0,candidates, target , ans , ds, 0);
    }
};