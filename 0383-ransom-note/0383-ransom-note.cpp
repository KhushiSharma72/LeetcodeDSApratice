class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mpp1;
        for(char ch:magazine){
            mpp1[ch]++;
        }
        for(char ch:ransomNote){
            if(mpp1[ch]==0){
                return false;
            }
            mpp1[ch]--;
        }
        return true;
        
    }
};