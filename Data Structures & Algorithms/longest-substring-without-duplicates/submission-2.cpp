class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, maxi = 0;
        unordered_set<char> seen;

        for(int right = 0;right < s.length();right++) {
            while(seen.count(s[right])) {
                seen.erase(s[left++]);
            }

            seen.insert(s[right]);
            maxi = max(maxi, right-left+1);
        }

        return maxi;
    }
};
