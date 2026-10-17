class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int first=-1;
        while(low<=high){
            int mid = low + ( high - low)/2;
            if(nums[mid]==target) {
                 first = mid ;
                 high=mid-1;
            }
            else if( nums[mid]<target){
                low=mid+1;
            }
            else {
                high = mid-1;
            }
        }
         int second = -1;
          low =0;
          high=n-1;
          while(low<=high){
            int mid = low + ( high - low)/2;
            if(nums[mid]==target) {
                 second = mid ;
                 low=mid+1;
            }
            else if( nums[mid]<target){
                low=mid+1;
            }
            else {
                high = mid-1;
            }
        }
        vector<int> vc;
        vc.push_back(first);
        vc.push_back(second);
        return vc;

    }
};