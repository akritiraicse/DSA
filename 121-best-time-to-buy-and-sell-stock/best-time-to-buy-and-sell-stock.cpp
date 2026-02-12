class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MP=0;
        int bestBuy=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]>bestBuy){
            MP=max(MP,prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy,prices[i]);
        }
    return MP;
    }
};