class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int dup = -1, miss = 1;

        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1])
                dup = nums[i];
            else if(nums[i] > nums[i-1] + 1)
                miss = nums[i-1] + 1;
        }
        if(nums[n-1] != n)
        miss = n;
        return {dup, miss};
    }
};