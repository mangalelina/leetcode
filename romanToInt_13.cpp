class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (auto r = s.begin(); r < s.end(); r++) {
            if (*r == 'I') {
                bool done = false;
                if (r != s.end()-1) {
                    auto temp = r;
                    temp++;
                    if (*temp == 'V') {
                        sum += 4;
                        done = true;
                        r++;
                    }
                    else if (*temp == 'X') {
                        sum += 9;
                        done = true;
                        r++;
                    }
                }
                if (!done) sum += 1; 
            }
            else if (*r == 'X') {
                bool done = false;
                if (r != s.end()-1) {
                    auto temp = r;
                    temp++;
                    if (*temp == 'L') {
                        sum += 40;
                        done = true;
                        r++;
                    }
                    else if (*temp == 'C') {
                        sum += 90;
                        done = true;
                        r++;
                    }
                }
                if (!done) sum += 10; 
            }
            else if (*r == 'C') {
                bool done = false;
                if (r != s.end()-1) {
                    auto temp = r;
                    temp++;
                    if (*temp == 'D') {
                        sum += 400;
                        done = true;
                        r++;
                    }
                    else if (*temp == 'M') {
                        sum += 900;
                        done = true;
                        r++;
                    }
                }
                if (!done) sum += 100; 
            }
            else if (*r == 'V') sum += 5;
            else if (*r == 'L') sum += 50;
            else if (*r == 'D') sum += 500;
            else if (*r == 'M') sum += 1000;
        }
        return sum;
    }
};
