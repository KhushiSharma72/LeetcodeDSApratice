class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>mpp;
        for(int i=0;i<list1.size();i++){
            mpp[list1[i]]=i;
        }
        vector<string>ans;
        int minsum=INT_MAX;
        for(int j=0;j<list2.size();j++){
            if(mpp.count(list2[j])){
                int sum=mpp[list2[j]]+j;

                if(sum<minsum){
                    minsum=sum;
                    ans.clear();
                    ans.push_back(list2[j]);
                }
                else if(sum==minsum){
                    ans.push_back(list2[j]);
                }
            }
        }
        return ans;
    }
};