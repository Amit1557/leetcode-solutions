class Solution {
public:
int digisum(int x){
    int sum=0;
    while(x!=0){
        sum+=x%10;
        x=x/10;
    }
    return sum;
}
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            if(digisum(i)%2==0) count++;
        }
        return count;
    }
};