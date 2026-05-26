class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> table;
        vector<vector<string>> result;
        for(int i=0;i<strs.size();i++) {
            string sortedString = strs[i];
            sort(sortedString.begin(), sortedString.end());
            table[sortedString].push_back(strs[i]);
        }

        for(const auto& [key, value]: table) {
            result.push_back(value);
        }

        return result;
    }
};
