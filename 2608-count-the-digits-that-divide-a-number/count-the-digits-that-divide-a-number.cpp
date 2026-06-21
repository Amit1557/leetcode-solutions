class Solution {
public:
    int countDigits(int num) {
        int neww=num;
        int sum=0;
        while(num!=0){
            int x=num%10;
            if(neww%x==0) sum+=1;
            num=num/10;
        }
        return sum;
    }
};