class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1){
            return s;
        }
        int n = s.size();
        int x = 2 * (numRows - 1);

        string ans="";

        for(int i = 0; i < numRows; i++) {
            for(int j = i; j < n; j += x) {
                ans += s[j];

                int diag = j + x - 2 * i;

                if(i != 0 && i != numRows - 1 && diag < n) {
                    ans += s[diag];
                }
            }
        }

        return ans;
    }
};