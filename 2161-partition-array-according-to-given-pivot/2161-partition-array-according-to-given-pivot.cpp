class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> final;

        for(int x : nums){
            if(x < pivot){
                final.push_back(x);
            }
        }

        for(int x : nums){
            if(x == pivot){
                final.push_back(x);
            }
        }

        for(int x : nums){
            if(x > pivot){
                final.push_back(x);
            }
        }

        return final;
    }
};

