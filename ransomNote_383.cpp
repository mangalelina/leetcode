class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for (char l: magazine) {
            m[l]++;
        }

        for (auto i : ransomNote) {
            if (m[i] <= 0) return false; 
            m[i]--;



        }
        return true;
        
    }
};
