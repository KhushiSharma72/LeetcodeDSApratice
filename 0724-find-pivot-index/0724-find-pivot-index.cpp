class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum=0;
        for(int x:nums){
            totalSum+=x;
        }
        int leftSum=0;
        for(int i=0;i<nums.size();i++){
            totalSum-=nums[i];

            if(leftSum==totalSum){
                return i;
            }
            leftSum+=nums[i];
        }
        return -1;
    }
};