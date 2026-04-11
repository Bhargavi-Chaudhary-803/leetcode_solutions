class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        for(int i = n; i >=0; i--){
            for(int j = n-1; j > i; j--){
                if(nums[i]+nums[j] == target){
                    return [i, j];
                }
            }
        }
        return [];
    }
}