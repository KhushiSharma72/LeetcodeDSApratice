class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        unordered_set<int> s;

        for (int n : nums) {
            s.insert(n);
        }

        int multiple = k;

        while (true) {
            if (s.find(multiple) == s.end()) {
                return multiple;
            }

            multiple += k;
        }
    }
};