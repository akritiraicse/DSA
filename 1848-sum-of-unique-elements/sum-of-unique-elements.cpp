class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101]={0};
        int sum=0;
        for(int n:nums){
            freq[n]++;
        }
        for(int n:nums){
            if(freq[n]==1){
                sum+=n;
            }
        }
        return sum;
    }
};