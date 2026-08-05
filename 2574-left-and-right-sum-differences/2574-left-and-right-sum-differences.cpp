class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        prefix[0]=0;
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i-1];
        }
        vector<int>suffix(n);
        suffix[n-1]=0;
        for(int j=n-2;j>=0;j--){
            suffix[j]=suffix[j+1]+nums[j+1];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=abs(prefix[i]-suffix[i]);
        }
        
        return ans;
    }
};