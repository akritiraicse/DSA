class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int totalSum=0;
        int singleSum=0;
        int doubleSum=0;
            for(int num:nums){
                totalSum+=num;
            if(num<10){
                singleSum+=num;
            }
            if(num>10){
                doubleSum+=num;
            }

    }
    if(2*singleSum>totalSum) return true;
    if(2*doubleSum>totalSum) return true;
    return false;
    }
};

        
