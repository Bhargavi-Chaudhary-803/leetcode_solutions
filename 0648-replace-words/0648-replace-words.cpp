class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        stringstream ss(sentence);
        string word, result = "";

        while (ss >> word) {
            string best = word;

            for (auto &root : dictionary) {
                if (word.find(root) == 0) {
                    if (root.length() < best.length()) {
                        best = root;
                    }
                }
            }

            result += best + " ";
        }

        result.pop_back();
        return result;
    }
};