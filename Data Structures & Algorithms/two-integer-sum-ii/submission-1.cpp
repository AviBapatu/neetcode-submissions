class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size(); // 3
        for(int i=0;i<=size-2;i++) { // 0 to 1
            int key = target - numbers[i]; // 4

            int start = i+1, end = size-1; // 1, 2
            
            while(start <= end) {
                int mid = (start + end)/2; // 1

                if(key > numbers[mid]) start = mid + 1; // 4 > 3 -> start = 2
                else if (key == numbers[mid]) return {i+1, mid+1};
                else end = mid - 1;
            }
        }

        return {};
    }
};
