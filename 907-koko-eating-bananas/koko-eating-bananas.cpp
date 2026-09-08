class Solution {
public:
    int hours(vector<int>& piles, int k) {
        int total = 0;
        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] % k == 0) {
                total += piles[i] / k;
            } else {
                total += piles[i] / k + 1;
            }
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            int p = hours(piles, mid);
            if (p <= h) {

                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};