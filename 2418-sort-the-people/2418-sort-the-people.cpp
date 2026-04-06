class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        int i,j;
        string temp; int moli;
        for(i=1;i<n;i++){
            moli = heights[i];
            temp = names[i];
            j = i-1;
            while(j>=0 && heights[j]<moli){
                heights[j+1] = heights[j];
                names[j+1] = names[j];
                j--;
            }
            heights[j+1] = moli;
            names[j+1] = temp;
        }
        return names;
    }
};