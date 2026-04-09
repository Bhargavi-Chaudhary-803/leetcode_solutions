class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int count = 0;
        int x = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < x; i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return x;
    }
};