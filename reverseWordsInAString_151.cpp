class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss(s);
        string word;
        stack<string> sen; 
        while (ss>>word) {
            sen.push(word);
        }
        string result;
        while (!sen.empty()) {
            result += sen.top();
            sen.pop();
            if (!sen.empty()) result += " ";
        }
        
        return result;
    }
};
