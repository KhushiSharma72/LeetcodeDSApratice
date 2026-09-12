class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>result(n,vector<int>(m));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                result[i][m-1-j]=1-image[i][j];
            }

        }
        return result;
    }
};