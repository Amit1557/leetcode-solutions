class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int l=0;
        int r=0;
        
       for(int i=0;i<k;i++){
    l+=cardPoints[i];
         }
         int  maxs=l;
        int right=n-1;
        for(int i=k-1;i>=0;i--){
            l=l-cardPoints[i];
            r=r+cardPoints[right];
            right--;
            maxs=max(maxs,l+r);
        }
        return maxs;
    }
};