class Solution {
public:
    int thirdMax(vector<int>& nums) {
    int largest=INT_MIN;
    int slargest= INT_MIN;
    int tlargest = INT_MIN;
    int flag=0;
    set<int> st;
    for(int i=0;i<nums.size();i++) st.insert(nums[i]);
    for(int i=0;i<nums.size();i++){
        if(nums[i]>largest){
              tlargest=slargest;
            slargest=largest;
            largest=nums[i];
        }
        else if(nums[i]>slargest && nums[i]!=largest){
            tlargest=slargest;
            slargest=nums[i];

        }
        else if(nums[i]>tlargest && nums[i]!=slargest && nums[i]!=largest){
            tlargest = nums[i];
            flag=1;
        }
    }
    if(st.size()<3) return largest;
    else return tlargest;
    }
};