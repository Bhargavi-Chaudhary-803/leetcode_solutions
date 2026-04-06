class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        string temp; int moli;
        for(int i = 0; i < n-1; i++){
            
            for(int j = 0; j < n-1-i; j++){
                if(heights[j]<heights[j+1]){
                    moli = heights[j];
                    heights[j] = heights[j+1];
                    heights[j+1] = moli;
                    temp = names[j];
                    names[j] = names[j+1];
                    names[j+1] = temp;
                }
            }
        }
        return names;
    }
};