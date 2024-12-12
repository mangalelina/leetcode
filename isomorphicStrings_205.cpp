class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int s2t[256] = {0};
        int t2s[256] = {0};
        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i];
            char c2 = t[i];
            
            // if no map exists in either library 
            if (s2t[c1] == 0 && t2s[c2] == 0) {
                s2t[c1] = c2;
                t2s[c2] = c1;
            }

            else if (!(s2t[c1]==c2 && t2s[c2] == c1 )) return false;


        }
        return true;         
    }
};
