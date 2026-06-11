class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);
        string max = s;
        char n = 0;

        for(char c : max) {
            if (c != '9') {
                n = c;
                break;
            }
        }

        if(n) {
            for (char &c : max) {
                if (c == n) c = '9';
            }
        }
        string min = s;

        if(min[0] != '1') {
            n = min[0];
            for (char &c : min) {
                if (c == n) c = '1';
            }
        } 
        
        else {
            n = 0;
            for (int i = 1; i < min.size(); i++) {
                if (min[i] != '0' && min[i] != '1') {
                    n = min[i];
                    break;
                }
            }

        if (n) {
                for (int i = 1; i < min.size(); i++) {
                    if (min[i] == n) min[i] = '0';
                }
            }
        }

        return stoi(max) - stoi(min);
    }
};