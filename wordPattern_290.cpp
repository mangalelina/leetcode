class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> letter;
        unordered_map<string, char> word;

        stringstream ss(s);
        string temp;
        vector<string> words;
        while (ss >> temp) {
            words.push_back(temp);
        }
        
        if (words.size() != pattern.size()) return false;

        for (int i = 0; i < words.size(); i++) {
            char c = pattern[i];
            string w = words[i];
            if (letter.find(c) == letter.end()) {
                if (word.find(w) != word.end()) return false;
                else {
                    letter[c] = w;
                    word[w] = c;
                }
            }
            else {
                if (letter[c] != w) return false; 
            }
        }
        return true;


        
    }
};
