class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        sort(strs.begin(), strs.end()); 
        string first = strs.front(); 
        string last = strs.back();
        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i]!=last[i]) {
                return result;
            }
            result += first[i];

        }
        return result;
    }
};
