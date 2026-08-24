class Solution {
public:
    int hammingDistance(int x, int y) {
        long long ans=0;
        while(x || y){
            if((x&1)!=(y&1)){
            ans=ans+1;
            }
            x=x>>1;
            y=y>>1;
            
        }
        return ans;
    }
};