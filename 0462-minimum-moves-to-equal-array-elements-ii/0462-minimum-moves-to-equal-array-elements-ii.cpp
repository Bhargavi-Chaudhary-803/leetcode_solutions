class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(), nums.end());
        int num = nums[n / 2];

        for(int i = 0; i < n; i++){
            if(nums[i] < num){
                count = count + (num - nums[i]);
            }

            if(nums[i] > num){
                count = count + (nums[i] - num);
            }
        }

        return count;

    } 
};