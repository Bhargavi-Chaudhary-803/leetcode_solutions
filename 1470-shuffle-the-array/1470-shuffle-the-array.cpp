class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
    int i;

    vector<int> result;
    for(i = 0; i < n ; i++){
        result.push_back(nums[i]);
        result.push_back(nums[i+n]);
        
    }

    return result;
    }
};