class Solution {
public:
    int strStr(string haystack, string needle) {
       int n=haystack.length();
       int m=needle.length();
       int i=0;
       int j=0;
       for(int i=0;i<n;i++){
        if(haystack[i]==needle[j]){
            j++;
            if(j==m){
                return i-m+1;
            }
        }
        else{
            i=i-j;
            j=0;
        }
       }
       return -1;
    /// ho gaya bro while loop nhi for loop lgna tha
    }
};