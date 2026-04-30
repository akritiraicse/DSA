class Solution {
public:
    int solve(int n,vector<int>&memo) {
        if(n<=2){
            memo[n]=n;
            return n;
        }
        if(memo[n]!=0){
            return memo[n];
        }
        int x=solve(n-1,memo);
        int y=solve(n-2,memo);
        memo[n]=x+y;
        return memo[n];
    }
    int climbStairs(int n){
        vector<int> memo(n+1, 0);
            return solve(n, memo);
        }
};