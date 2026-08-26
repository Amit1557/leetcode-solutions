class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n=start^goal;
        long long  count=0;
        while(n>0){
            count+=1;
            n=n&(n-1);
        }
        return count;
    }
};