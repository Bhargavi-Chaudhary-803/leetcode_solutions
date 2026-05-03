class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st(dictionary.begin(), dictionary.end());

        stringstream ss(sentence);
        string word, result = "";

        while (ss >> word) {
            for (int i = 1; i <= word.length(); i++) {
                string prefix = word.substr(0, i);

                if (st.find(prefix) != st.end()) {
                    word = prefix;
                    break;
                }
            }
            result += word + " ";
        }

        result.pop_back();
        return result;
    }
};