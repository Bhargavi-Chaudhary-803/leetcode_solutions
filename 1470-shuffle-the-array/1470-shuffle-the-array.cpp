class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
    int i;

    vector<int> indice;
    for(i = 0; i < n ; i++){
        indice.push_back(nums[i]);
        indice.push_back(nums[i+n]);
        
    }

    return indice;
    }
};