class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, int x) {
        if (x == nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int i = x; i < nums.size(); i++) {
            swap(nums[x], nums[i]);
            solve(nums, x + 1);
            swap(nums[x], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums, 0);
        return ans;
    }
};