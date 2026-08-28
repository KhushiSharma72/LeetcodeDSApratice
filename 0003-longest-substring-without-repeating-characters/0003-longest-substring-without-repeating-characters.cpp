class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int n=s.length();
        int ans=0;
        int count=0;
        int freq[256]={0};
        while(j<n){
            if(freq[s[j]]==0){
                freq[s[j]]++;
                count++;
                j++;
                ans=max(ans,count);
            }
            else{
                freq[s[i]]--;
                i++;
                count--;
            }
        }
        return ans;
    }
};