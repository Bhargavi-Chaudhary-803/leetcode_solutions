class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int k = (b.size() + a.size() - 1) / a.size(); // ceil(|b| / |a|)

        string s;
        for (int i = 0; i < k; i++)
            s += a;

        if (s.find(b) != string::npos)
            return k;

        s += a;

        if (s.find(b) != string::npos)
            return k + 1;

        return -1;
    }
};