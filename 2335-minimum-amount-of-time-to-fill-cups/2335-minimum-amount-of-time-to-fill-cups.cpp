class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>pq;
        for(int i=0;i<amount.size();i++){
            if(amount[i]>0){
            pq.push(amount[i]);
            }
        }
        int count=0;
        while(pq.size()>=2){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            x--;
            y--;
            if(x>0 ){
            pq.push(x);
            }
            if(y>0){
            pq.push(y);
            }
            count++;
        }
        if(!pq.empty()){
            return count+=pq.top();
        }
        return count;
    }
};