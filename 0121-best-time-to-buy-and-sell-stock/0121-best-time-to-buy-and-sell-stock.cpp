class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=INT_MAX;
        int ans=0;

        for(int i=0;i<prices.size();i++){
            a=min(a,prices[i]);
            int s=prices[i]-a;
            ans=max(ans,s);
        }
        return ans;
    }
};