class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(nums[mid+1]>nums[mid]){
                s=mid+1;
            }else{
                e=mid;
            }

        }
        return s;
    }
};