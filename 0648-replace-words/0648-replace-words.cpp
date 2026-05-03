class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        stringstream ss(sentence);
        string word, result = "";

        while (ss >> word) {
            string replacement = word;

            for (int i = 0; i < dictionary.size(); i++) {
                string root = dictionary[i];
                if (word.substr(0, root.length()) == root) {
                    if (root.length() < replacement.length()) {
                        replacement = root;
                    }
                }
            }

            result += replacement + " ";
        }

        result.pop_back();
        return result;
    }
};