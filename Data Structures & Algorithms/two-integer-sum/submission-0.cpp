class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for(int i=0;i<nums.size();i++) {
            auto initialIndex = seen.find(nums[i]);
            if(initialIndex != seen.end()) {
                return {initialIndex -> second, i};
            }

            seen.emplace(target-nums[i], i);
        }
    }
};
