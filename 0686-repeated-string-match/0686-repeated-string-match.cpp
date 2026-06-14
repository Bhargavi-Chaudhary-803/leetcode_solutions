class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string s = """";
        int x = (b.size() + a.size() - 1) / a.size();

        for(int i = 0; i < x; i++){
            s += a;
        }

        if(s.find(b) != string::npos){
            return x;
        }

        else{
            s += a;
        }

        if(s.find(b) != string::npos){
            return x+1;
        }

        return -1;
    }
};