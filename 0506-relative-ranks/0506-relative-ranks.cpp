class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        int rank=1;
        vector<string>ans(n);
        while(!pq.empty()){
            int index=pq.top().second;
            pq.pop();
            if(rank==1){
                ans[index]="Gold Medal";
            }
            else if(rank==2){
                ans[index]="Silver Medal";
            }
            else if(rank==3){
                ans[index]="Bronze Medal";
            }
            else{
                ans[index]=to_string(rank);
            }
            rank++;
        }
        return ans;
    }
};