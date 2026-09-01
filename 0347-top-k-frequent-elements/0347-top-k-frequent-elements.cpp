class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mpp;
        for(int x:nums){
            mpp[x]++;
        }
        for(auto it:mpp){
            pq.push({it.second,it.first});
        }
        vector<int>result;
        while(k--){
            if(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        }
        return result;
    }
};