class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int sum = 0;

        // Take first k cards from left
        for(int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }

        int maximum = sum;

        int right = n - 1;

        // Replace left cards one by one with right cards
        for(int i = k - 1; i >= 0; i--) {
            sum -= cardPoints[i];
            sum += cardPoints[right];

            maximum = max(maximum, sum);

            right--;
        }

        return maximum;
    }
};