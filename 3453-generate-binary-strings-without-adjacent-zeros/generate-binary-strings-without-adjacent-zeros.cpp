class Solution {
public:
    
    void solve(string curr, int n, vector<string>& ans) {
        
        if(curr.length() == n) {
            ans.push_back(curr);
            return;
        }

        solve(curr + "1", n, ans);

        if(curr.empty() || curr.back() != '0') {
            solve(curr + "0", n, ans);
        }
    }

    vector<string> validStrings(int n) {
        vector<string> ans;

        solve("", n, ans);

        return ans;
    }
};