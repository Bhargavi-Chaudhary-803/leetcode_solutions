class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i, j = 0;

        for(i = 0; i < n; i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j = j+1;
                }
            }

        while(j < n){
              nums[j] = 0;
              j = j+1;
            }
        }    

};