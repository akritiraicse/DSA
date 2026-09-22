class Solution {
public:

    bool solve(vector<int>& nums, int i, vector<int>& dp) {

        if(i == nums.size() - 1) {
            return true;
        }

        if(nums[i] == 0) {
            return false;
        }

        if(dp[i] != -1) {
            return dp[i];
        }

        for(int jump = 1; jump <= nums[i]; jump++) {

            int next = i + jump;

            if(next < nums.size()) {

                if(solve(nums, next, dp)) {
                    dp[i] = 1;
                    return true;
                }
            }
        }

        dp[i] = 0;
        return false;
    }

    bool canJump(vector<int>& nums) {

        vector<int> dp(nums.size(), -1);

        return solve(nums, 0, dp);
    }
};