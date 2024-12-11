class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        auto first = num.begin();
        auto last = num.end()-1;
        while (first < last) {
            if (*first != *last) return false;
            first++;
            last--;
        }
        return true;
    }
};
