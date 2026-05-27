class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> unique(nums.begin(), nums.end());
        int count = 0;
        int longest = 0;
        for(int num:unique) {
            if(!unique.count(num-1)) {
                count = 1;

                while(unique.count(num+1)) {
                    count++;
                    num += 1;
                }

                longest = max(longest, count);
            }
        }
        return longest;
    }
};
