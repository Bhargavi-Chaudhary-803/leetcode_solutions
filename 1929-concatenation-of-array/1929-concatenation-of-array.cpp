class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      vector<int> arr;
        for(int x : nums){
            arr.push_back(x);
        }
        for(int x : nums){
            arr.push_back(x);
        }
        return arr;
    }
};