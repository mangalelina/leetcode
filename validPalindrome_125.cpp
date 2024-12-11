class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (!isalnum(s[i])) {
                s.erase(s.begin()+i);
                i--;
            }
            else if (isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
        }
        int i = 0;
        int j = s.size()-1; 
        while (i <= j) {
            if (s[i] != s[j]) return false;
            else{
                i++;
                j--;
            }
        }
        return true; 
        
    }
};
