class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i;
        vector<int> firstHalf(n);
        vector<int> secondHalf(n);

        for(i=0;i<2*n;i++){
            if(i<n){
                firstHalf[i] = nums[i];
            }
            else{
                secondHalf[i-n] = nums[i];
            }
        }

        vector<int> result;
        for(i=0;i<n;i++){
            
            result.push_back(firstHalf[i]);
            result.push_back(secondHalf[i]);
        }
       return result;
    }
};