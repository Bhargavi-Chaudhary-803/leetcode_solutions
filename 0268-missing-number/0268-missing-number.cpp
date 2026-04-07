class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i,j,x;
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1-i;j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
    

        for(i=0;i<n;i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return n;
    }
};