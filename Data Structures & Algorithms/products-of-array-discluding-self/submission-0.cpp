class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> leftProduct;
        int left = 1;
        for(int i=0;i<nums.size();i++) {
            leftProduct.push_back(left);
            left *= nums[i];
        }

        vector<int> result(nums.size());
        int right = 1;
        for(int i=nums.size()-1;i>=0;i--) {
            result[i]= right*leftProduct[i];
            right *= nums[i];
        }

        return result;
    }
};
