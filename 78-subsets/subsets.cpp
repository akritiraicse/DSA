class Solution {
public:
    void solve(vector<int>& nums, int n, int i, vector<int> curr, vector<vector<int>>& ans) {
        if (i == n) {
            ans.push_back(curr);
            return;
        }

        solve(nums, n, i + 1, curr, ans);

        curr.push_back(nums[i]);
        solve(nums, n, i + 1, curr, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> curr;

        solve(nums, n, 0, curr, ans);

        return ans;
    }
};