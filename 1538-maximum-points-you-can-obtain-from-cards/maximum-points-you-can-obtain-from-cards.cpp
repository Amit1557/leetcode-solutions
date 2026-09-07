class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int  n = cardPoints.size();
        int lsum=0;
        for(int i=0;i<k;i++) lsum+=cardPoints[i];
        int l=k-1;
        int r=0;
        int rsum=0;
        int total=lsum;
        int maxsum=lsum;
        while(l>=0){
            total-=cardPoints[l];
            total+=cardPoints[n-r-1];
            r++;
            l--;
            maxsum=max(maxsum,total);
        }
        return maxsum;
    }
};