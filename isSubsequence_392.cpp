class Solution {
public:
    bool isSubsequence(string s, string t) {
        // s is substring of t 
        int ss = s.size(), ts = t.size();
        if (ss > ts) return false;
        if (ss == ts && s==t) return true; 

        int index = 0; 
        for (int i = 0; i < ts; i++) {
            if (t[i] == s[index]) {
                index++;
            }
        }

        if (index == ss) return true;
        return false;

    }
};
