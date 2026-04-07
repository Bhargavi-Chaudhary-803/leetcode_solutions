class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < n - 1 - i; j++) {
                if(nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
        
        int low = 0;
        int high = n - 1;
        int mid;

        while(low <= high) {
            mid = (low + high) / 2;

            if(nums[mid] == mid) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return low;
    }
};