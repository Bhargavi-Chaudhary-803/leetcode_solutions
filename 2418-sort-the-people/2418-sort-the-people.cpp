class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        int i,j;
        string temp; int moli;
        for(i=0;i<n-1;i++){
            int key = i;
            for(j=i+1;j<n;j++){
                if(heights[j]>heights[key]){
                    key = j;
                }
            }

        moli = heights[i];
        heights[i] = heights[key];
        heights[key] = moli;

        temp = names[i];
        names[i] = names[key];
        names[key] = temp;
        }
        return names;

    }
};