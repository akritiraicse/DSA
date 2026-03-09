class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n=capacity.size();
        vector<int>arr;
        int index=-1;
        for(int i=0;i<n;i++){
            if(capacity[i]>=itemSize){
                /*if(index==-1||capacity[i]<capacity[index]){
                  index=i;
                }*/
                arr.push_back(capacity[i]);
            }
        }
        if(arr.empty()) return -1;
        int val=*min_element(arr.begin(), arr.end());
        for(int i=0;i<n;i++){
            if(capacity[i]==val){
                index=i;
                break;
            }
        }
        return index;
        }
};