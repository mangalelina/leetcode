class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size(), n = needle.size();
        
        if (h < n) return -1;

        for (int i = 0; i < h-n+1; i++) {
            if (haystack.substr(i, n) == needle) return i;
        }
        return -1;
    }
};
