#include<algorithm>
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<2){
            return 0;
        }
        int gap =INT_MIN;
        for(int i=0;i<n-1;i++){
            gap=max(nums[i+1]-nums[i],gap);
        }
        return gap;
    }
};