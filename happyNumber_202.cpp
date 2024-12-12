class Solution {
public:


    int next(int n) {
        int sum = 0;
        while (n>0) {
            int digit = n%10;
            n /= 10;
            sum += digit * digit;
        }
        return sum;


    }
    
    
    bool isHappy(int n) {

        unordered_set<int> seen;
        while (n!=1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            n = next(n);
        }
        
        return n==1;
            
            




        


        
    }
};
