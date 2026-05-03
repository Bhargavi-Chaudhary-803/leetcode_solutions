class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        stringstream ss(sentence);
        string word, ans = "";

        while (ss >> word) {
            string best = word;

            for (auto &root : dictionary) {
                if (word.find(root) == 0) {
                    if (root.length() < best.length()) {
                        best = root;
                    }
                }
            }

            ans += best + " ";
        }

        ans.pop_back();
        return ans;
    }
};