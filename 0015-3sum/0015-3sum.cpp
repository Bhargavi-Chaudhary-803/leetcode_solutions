class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

            for(int i = 0; i<n-2; i++) {
                if(i > 0 && nums[i] == nums[i - 1])
                continue;
            int x = i + 1;
            int y = n - 1;
            while(x < y) {
                int sum = nums[i] + nums[x] + nums[y];
                if(sum == 0) {
                    ans.push_back({nums[i], nums[x], nums[y]});
                    while(x < y && nums[x] == nums[x + 1])
                        x++;
                    while(x < y && nums[y] == nums[y - 1])
                        y--;
                    x++;
                    y--;
                }
                else if(sum < 0)
                    x++;
                else
                    y--;
            }
        }
        return ans;
    }
};